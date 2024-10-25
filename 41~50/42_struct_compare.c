#include <stdio.h>

struct point {
    int x;
    int y;
};

void comparePoint (struct point p1, struct point p2) {
    if((p1.x == p2.x) && (p1.y == p2.y))
    {
        printf("p1과 p2가 같습니다.");
    }
}

int main(void)
{
    struct point p1;
    struct point p2;

    p1.x = 30;
    p1.y = 10;

    p2.x = 30;
    p2.y = 10;

    /*
    if(p1 == p2)
    {
        printf("p1과 p2가 같습니다.");
    }
    */
    // 구조체는 아무리 같은 구조체 타입이라고 하더라도 두 개의 변수 자체를 직접 비교하지 못한다. p1과 p2는 그 자체로 쓰일 수 없기 때문이다.

    comparePoint(p1, p2);


    return 0;
}