#include <stdio.h>

int main(void)
{
    char input[1001];
    gets(input); // input이라는 char배열 안에 그 다음으로 사용자가 입력하는 문자열이 엔터를 칠 때까지 들어가는 것을 의미
    int count = 0;
    while(input[count] != '\0') // \0은 null을 의미
    {
        count++;
    }
    printf("입력한 문자열의 길이는 %d이다.", count);
    printf("입력한 문자열 : %s", input);
    
    return 0;
}