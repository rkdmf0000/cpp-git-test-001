#include <stdio.h>
#include <iostream>


//상수 함수 포인터
//특징 - 캡슐 안쪽에서 안써짐
//int (*const jool)();

//비 상수 함수 포인터
//특징 - 캡슐 안쪽에서 써짐
int (*alla)();

int dongkey_plus()
{
    return 9919;
}




//자 오늘은 함수 포인터 라는걸 해볼까
int main(void)
{
    
    //함수 포인터는 함수로 초기화 가능하다고 한다. 그럼 2개 타입의 포인터를 
    //쑤셔보자
    //이런식으로 초기화 한다는데
    int (*jool)() = dongkey_plus;
    int (*alla)() = dongkey_plus;
    
    //std::cout << jool() << std::endl;
    std::cout << alla() << std::endl;



    //비 상수 포인터는 잘 되는데 말야
    //상수 포인터는 맘대로 잘 안되네 뭔가 더 해야하겠는데

    return 0;
}