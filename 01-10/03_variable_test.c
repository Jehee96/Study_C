#include <stdio.h>

int main(void)
{
    int x = 50;
    float y = 123456789.123456789;
    double z = 123456789.123456789; // double은 8byte
    printf("x = %d\n", x);
    printf("y = %.2f\n", y); // %.2f : 실수를 출력할 때, 소수점 두번 째 자리까지만 출력하겠다는 의미
    printf("z = %.2f\n", z);
    
    return 0;
}