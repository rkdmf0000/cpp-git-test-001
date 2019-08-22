#include <stdio.h>
#include <iostream>

//함수 오버로딩 해보자
//php에선 개똥같은 부분이지
class scv
{
    public:
    void say(char s)
    {
        std::cout << "got it" << std::endl;
    };
    void say(int s)
    {
        std::cout << "i got gott" << std::endl;
    };
};

int main(void)
{
    scv* x = new scv();
    char cp = 'o';
    x->say(cp);
    x->say(999999);
    return 0;
};