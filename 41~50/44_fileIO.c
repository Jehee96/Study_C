#include <stdio.h>

int main(void)
{
    FILE *fp = NULL;
    fp = fopen("output.txt", "w"); // fopen : 파일 열기(w : 쓰기모드로)
    if(fp == NULL)
    {
        printf("파일 열기에 실패했습니다.\n");
    }
    else
    {
        printf("파일 열기에 성공했습니다.\n");
    }
    fputc('H', fp); // fputc : 문자열 하나씩 출력
    fputc('E', fp);
    fputc('L', fp);
    fputc('L', fp);
    fputc('O', fp);
    fclose(fp);     // fclose : 파일 닫기
    
    return 0;
}