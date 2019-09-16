#include <stdio.h>
#include <iostream>
#include <vector>
#include <windows.h>

//연습용
namespace calcApp
{
    class ErrorHandle
    {
        protected:
        private:
        static enum type {
            DANGER,WARNING,NOTICE,ALERT,NORMAL,BULLSHIT
        };
        public:
        unsigned int errorNumber;
        std::string ErrorMessage;
        ~ErrorHandle()
        {

        }
        ErrorHandle()
        {

        }
    };
    class toolBox
    {
        public:
        void searchStr(char all[],char target)
        {
            int i;
            // for(i=0;i<sizeof(all);i++) {
            //     std::cout << all[i];
            // }
        };
    };
    //혼합형 데이터를 위한 기능. 
    class mixedType
    {
        
        private:
        std::vector<int>     dx;
        std::vector<int>     dy;
        std::vector<int>     I_int;
        std::vector<char>    I_char;

        bool fucDimensionData()
        {

        };
        //변경된 크기를 계속 맞춰주기 위해 있는 기능.
        bool refLength()
        {

        };
        void refDimension(char x,char y)
        {

        };
        void refDimension(int x,int y)
        {

        };

        public:
        int Length = 0;
        ~mixedType(void)
        {
            
        };
        mixedType(void)
        {

        };

    };
    class normal
    {
        typedef calcApp::mixedType line;
        //using line = calcApp::mixedType;
        private:
        line line;
        public:
        void init()
        {
            
        }
        normal()
        {
            
        }
        ~normal()
        {

        }
    };
};

int main(void)
{
    char cc[] = "asdasdasdasd";
    calcApp::toolBox x = calcApp::toolBox();
    x.searchStr(cc,'c');

    return 0;
};