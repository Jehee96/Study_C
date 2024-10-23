#include <stdio.h>
#include <string.h>
/*
strcmp()는 inputOne과 inputTwo를 비교한다.
결과값이 0보다 크면 inputOne이 inputTwo보다 크고, 0보다 작으면 inputTwo가 inputOne보다 큰 것을 의미하고, 두 문자열이 같으면 0을 리턴한다.
*/

int main(void)
{
    char inputOne[5] = "A";
    char inputTwo[5] = "B";
    printf("문자열 비교 : %d\n", strcmp(inputOne, inputTwo));

    return 0;
}