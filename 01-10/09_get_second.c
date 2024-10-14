#include <stdio.h>
#define SECOND_PER_MINUTE 60

int main(void)
{
    int input = 1000; // 1000초
    int minute = input / SECOND_PER_MINUTE;
    int second = input % SECOND_PER_MINUTE;
    printf("%d초는 %d분 %d초이다.\n", input, minute, second);
    
    return 0;
}