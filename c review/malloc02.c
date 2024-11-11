#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, i;
    int* numbers;

    printf("배열 크기 입력 : ");
    scanf("%d", &size);

    numbers = (int*)malloc(size * sizeof(int)); // size 크기만큼의 int 배열 할당

    if (numbers == NULL)
    {
        printf("메모리 할당 실패\n");
        return 1;
    }
    
    for (i = 0; i < size; i++)
    {
        numbers[i] = i * 10; // 0, 10, 20, ... 으로 값 설정
    }

    for (i = 0; i < size; i++)
    {
        printf("%d", numbers[i]);
    }

    free(numbers);
    
    return 0;
}