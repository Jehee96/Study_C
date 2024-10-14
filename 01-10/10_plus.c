#include <stdio.h>

int main(void)
{
    int x = 0;
    printf("현재의 x는 %d이다.\n", x);
    x++;
    printf("현재의 x는 %d이다.\n", x);
    printf("현재의 x는 %d이다.\n", x--); // x를 출력 후, x를 1 뺀다.
    printf("현재의 x는 %d이다.\n", x);
    printf("현재의 x는 %d이다.\n", --x); // x를 출력 전 1 뺀다.
    
    return 0;
}