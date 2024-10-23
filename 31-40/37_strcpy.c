#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[10] = "유쨈미";
    char result[10] = "박쨈미";
    strcpy(result, input); // result : 복사될 대상 문자열, input : 복사할 원본 문자열
    printf("문자열 복사 : %s\n", result);

    return 0;
}