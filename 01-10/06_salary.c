#include <stdio.h>
#define MONTHS 12 // 상수에 대한 정의. 원주율이나 사각형을 구하는 공식같이 이미 정해진 수학적 법칙같은 경우 상수로 정의를 한다.
/*
C언어에서 사용되는 자료형은 다양하다. 사용자 정의 자료형(User Defined), 파생 자료형(Derived) 등이 있지만 흔히 말하는 자료형은 원시 자료형(Primitive)만을 말하는 경우가 많다.
문자를 표현할 때는 char, 숫자를 표현할 때는 int, float, double 자료형을 사용한다. void는 자료형 자체가 없다는 의미이다.
주의할 점은 C언어에서는 따로 문자열을 저장하는 string 자료형이 없고 char 자료형만을 사용하기 때문에 문자열 표현을 위해서는 char 자료형을 연속적으로 사용해야 한다.
*/
int main(void)
{
    double monthSalary = 1000.5;
    printf("$ %.2f", monthSalary * MONTHS);

    return 0;
}