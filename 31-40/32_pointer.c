#include <stdio.h>
/*
포인터란 C언어의 가장 큰 특징이자 장점이다. 포인터는 특정 데이터가 저장된 메모리의 주소를 저장하는 변수라고 할 수 있다.
다른 곳의 주소 그 자체를 가리키기 때문에 이를 응용하여 다양한 연산을 수행할 수 있다.
뿐만 아니라 프로그램의 어떠한 위치에서 시행되더라도 특정한 주소를 그대로 이용하기 때문에 값이 즉시 변경된다는 특징을 가지고 있다.
 */

// 두 변수의 값을 서로 변환하는 포인터 함수
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(void)
{
    int x = 1;
    int y = 2;
    swap(&x, &y);
    printf("x = %d\ny = %d\n", x, y);

    return 0;
}