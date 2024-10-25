#include <stdio.h>

int main(void)
{
    FILE *fp = NULL;
    int c;

    fp = fopen("input.txt", "r");

    if (fp == NULL)
    {
        printf("파일 열기에 실패했습니다.\n");
    }
    else
    {
        printf("파일 열기에 성공했습니다.\n");
    }

    while ((c = fgetc(fp)) != EOF) // fgetc : 지금 열려있는 파일에서 문자 하나를 읽어서 c에 저장한다는 의미.
                                   // EOF(End Of File) : 파일의 끝이 아니라면 putchar의 해당 문자를 출력.
    {
        putchar(c);
    }

    fclose(fp);
    
    return 0;
}