#include <stdio.h>

// 재귀 함수(Recursive Function)
void print(int count)
{
    if(count == 0)
    {
        return;
    }
    else
    {
        printf("문자열 출력.\n");
        print(count - 1);
    }
    
}

int main(void)
{
    int number;
    printf("원하는 문자열의 출력 갯수 입력 : ");
    scanf("%d", &number);
    print(number);
    return 0;
}