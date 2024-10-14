#include <stdio.h>

int main(void)
{
    int x = -50, y = 30;
    int absoluteX = (x > 0) ? x : -x; // 항상 절댓값을 반환.
    int max = (x > y) ? x : y;
    int min = (x < y) ? x : y;
    printf("x의 절댓값은 %d이다.\n", absoluteX);
    printf("x와 y중에서 최댓값은 %d이다.\n", max);
    printf("x와 y중에서 최소값은 %d이다.\n", min);
    
    return 0;
}