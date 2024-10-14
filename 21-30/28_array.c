#include <stdio.h>
#include<limits.h>
#define NUMBER 5

int main(void)
{
    int i, max, min, index;
    int array[NUMBER];
    max = 0;
    index = 0;

    // 최댓값
    for(i = 0; i < NUMBER; i++)
    {
        scanf("%d", &array[i]);
        if(max < array[i])
        {
            max = array[i];
            index = i;
        }
    }
    printf("가장 큰 값은 %d이다. 위치는 %d번째이다.\n", max, index + 1);
    
    // 최솟값
    min = INT_MAX;
    for(i = 0; i < NUMBER; i++)
    {
        scanf("%d", &array[i]);
        if(min > array[i])
        {
            min = array[i];
            index = i;
        }
    }
    printf("가장 작은 값은 %d이다. 위치는 %d번째이다.\n", min, index + 1);
    
    return 0;
}