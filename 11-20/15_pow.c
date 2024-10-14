#include <stdio.h>
#include <math.h> // pow(), abs() ...

int main(void)
{
    double x = pow(2.0, 20.0);
    printf("2의 20제곱은 %.0f이다.\n", x); // %.0f : 소수점 이후로 0번째 숫자까지 출력(정수)

    return 0;
}