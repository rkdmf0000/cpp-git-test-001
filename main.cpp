#include <stdio.h>
#include <iostream>
#include <fstream>
namespace testxxx
{
    class exToolClass
    {
        public:
        int fileCreate(std::string txt){
            std::ofstream file {"hello.txt"};
            std::string* a = &txt;
            file << &a;
        };
    };
}

int main()
{
    /*
    파일 생성을 하는데
    string을 포인터로 변환시켜서 포인터 변수에 넣고 그걸
    파일 내용 입력 할 때 역전환 시켜서 넣으면 내용이 그대로 그대로 들어가는지에 대한 
    테스트

    결괴 : 파일 생성이 안도ㅣ네ㅋㅋㅋ 그냥 문자열을 어디 입력 할 땐 char[] 형태로 하는게 좋을려나.
    아니면 복호화 가능한 해쉬로 바꿔서 넣는건 불안정해.. 음
    
    
    -- 보니까 함수에 반환은 배열로 할 수 업네 char* 가 되어야 한다.
    */
    testxxx::exToolClass toolInstance = testxxx::exToolClass();
    std::string dummyText = "edit code on \"visual studio code\" of the best experience.";
    toolInstance.fileCreate(dummyText);
}
