#include <stdio.h>

int main(void)
{
    int score = 85; // 학생의 점수를 의미
    if(score >= 90)
    {
        printf("A학점\n");
    }else if (score >= 80)
    {
        printf("B학점\n");
    }else if (score >= 70)
    {
        printf("C학점\n");
    }else
    {
        printf("F학점\n");
    }
    
    return 0;
}