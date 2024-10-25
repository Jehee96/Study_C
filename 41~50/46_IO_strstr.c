#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *fp;
    char fname[256];
    char buffer[256];
    char word[256];
    int line = 0;

    printf("파일 이름을 입력하세요 : ");   // hello.txt
    scanf("%s", fname);
    
    printf("탐색할 단어를 입력하세요 : "); // o
    scanf("%s", word);
    
    if ((fp = fopen(fname, "r")) == NULL)
    {
        fprintf(stderr, "파일 %s을 열 수 없습니다.\n", fname); // fprintf : 파일 관련한 에러 출력시 사용
        return 0;
    }
    
    while (fgets(buffer, 256, fp)) // 파일을 읽었다면 256의 길이만큼 파일에서 읽어서 buffer에 담을 수 있도록
    {
        line++;
        if (strstr(buffer, word))  // strstr : word가 buffer에 포함이 되어있는지에 대한 여부
        {
            printf("라인 %d : 단어 %s이(가) 발견되었습니다.\n", line, word); // 라인 5 : 단어 o이(가) 발견되었습니다.
        }
    }
    fclose(fp);
    
    return 0;
}