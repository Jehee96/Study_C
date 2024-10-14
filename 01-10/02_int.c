#include <stdio.h>

int main(void)
{
    int x;
    x = 5;
    // printf("%d", x); // %d에 x값이 들어감
    // sizeof : 메모리 크기를 나타내는 c언어 기본 함수. int는 정수이므로 4byte만큼 메모리를 차지한다.
    printf("변수 x의 메모리 크기는 %d이다.", sizeof(x));
    
    return 0;
}