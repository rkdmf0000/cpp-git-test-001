#include <stdio.h>
#include <iostream>



int main(void)
{

    //어제부터 char 배열을 막 만지는걸 하고있는데 막 상상한만큼의 결과가 안나오네
    //출근하기시뤙  
    char    s[30] = {'f','u','c','k','e','n','e','r','\0','Y','E','E'};
    int     i;
    for(i=0;s[i]!='\0';i++) std::cout << s[i];

    std::cout << std::endl;

    char* cp = s;

    //res : 0x61fee8==0x61feee
    //이건 s가 포인터 주소로 안해서 메모리가 새로 할당되는 모양이다 & 붙여서 되도록 하고싶은데 에러난다던데?
    //음..
    std::cout << &cp << "==" << &s << std::endl;

    //그럼 배열이 아니라 그냥이면 잘 되는지 테스트

    int     ppap    = 1;
    int*    ppap_ex = &ppap;

    //res : 0x61fee4==0x61fee0
    //아닌데? 새로 메모리가 만들어졌는데??응? 내가 원하는 결과는 이게 아닌디이
    //상상으로썬 포인터 변수에 주소값을 넣음 같은 변수를 공유하는게 아닌가 보다 그럼
    std::cout << &ppap << "==" << &ppap_ex << std::endl;

    int     YEEnt       = 5877;
    int&    YEEnt_ex    = YEEnt;

    //res : 0x61fed8==0x61fed8
    //이거네 ㅋ 그냥 변수 자체가 참조형이여야 되네 이거 참 참 참
    std::cout << &YEEnt << "==" << &YEEnt_ex << std::endl;

    //고로 2019.08.19 저녁의 학습 끗

    return 0;
}