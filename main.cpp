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

    std::cout << cp << "==" << &s;

    return 0;
}