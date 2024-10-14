#include <stdio.h>

int main(void)
{
    int x = 50, y = 30;
    printf("x가 y와 같은가? %d\n", x == y);  // 1참, 0거짓(C언어는 내부적으로 0이 아닌 다른 값들을 참값으로 인식한다.)
    printf("x가 y와 다른가? %d\n", x != y);
    printf("x가 y보다 큰가? %d\n", x > y);
    printf("x가 y보다 작은가? %d\n", x < y);
    printf("x에 y값을 넣으면? %d\n", x = y); // x(50)에 y(30)값을 치환
    
    return 0;
}