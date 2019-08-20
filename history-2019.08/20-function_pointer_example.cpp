#include <stdio.h>
#include <iostream>

//일단 파라미터 명칭 없이 다 쓰갈겨준다
//이게 그 원형 선언인가 그거구만 이럼 컴파일 에러 안나겠네 굳이 .. 그냥 위에 쓰면 될껄 
//이래서 해더 파일이 있다고 알고있다.
double Add(double, double);
double Sub(double, double);
double Mul(double, double);
double Div(double, double);
//3번짜 파라미터가 함수 포인터로 들어가니까 저리 해준거같다
//참고로 func는 타입이 아니라 파라미터 이름이다 첨 보고 착각해쓰 ㅎ
double Calculator(double, double, double (*func)(double, double));

int main(void)
{
    //캡슐 닫하기전 내용까진 이해했고 그려려니함

    //이거시 포인터 선언
    double (*calc)(double, double) = NULL; 


    double num1 = 3;
    double num2 = 4;
    double result = 0;
    char oper = '*';
    switch (oper)
    {
    case '+':
        calc = Add;
        break;
    case '-':
        calc = Sub;
        break;
    case '*':
        calc = Mul;
        break;
    case '/':
        calc = Div;
        break;
    default:
        std::cout << "calc(+, -, *, /) only support.";
        break;
    }
    result = Calculator(num1, num2, calc);
    std::cout << "calc " << result << " desu. dummy jackies grenner";
    return 0;
}

//이후에 형식이나 그런것을 다 정의해준다.
double Add(double num1, double num2) { return num1 + num2; }
double Sub(double num1, double num2) { return num1 - num2; }
double Mul(double num1, double num2) { return num1 * num2; }
double Div(double num1, double num2) { return num1 / num2; }
double Calculator(double num1, double num2, double (*func)(double, double)) { return func(num1, num2); }