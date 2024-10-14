#include <stdio.h>

// 2차원 배열 구구단

int main(void)
{
    int i, j;
    int gugudan[10][10];
    for(i = 1; i <= 9; i++)
    {
        printf("\n[ %d단 ]\n\n", i);
        for(j  = 1; j <=9; j++)
        {
            gugudan[i][j] = i * j;
            printf("%d * %d = %d\n", i, j, gugudan[i][j]);
        }
        
    }    
    return 0;
}