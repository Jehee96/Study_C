#include <stdio.h>  // printf와 같은 것들을 사용 가능하게끔 만들어주는 라이브러리.
#include <limits.h> // limits.h : stdio와 같은 하나의 라이브러리임. 각각의 변수들, 자료형에 따른 한계점, 한계값을 포함하고 있다.
// overflow : 특정한 변수가 가지고 있을 수 있는 범위를 넘었을 때를 의미함. 하나의 오류라고도 볼 수 있음.

int main(void)
{
    int x = INT_MAX;
    printf("int형의 최대값 x는 %d이다.\n", x); // int형의 최대값 x는 2147483647이다.
    printf("x + 1은 %d이다.\n", x + 1);        // x + 1은 -2147483648이다. int형의 최대값인 2147483647에 1을 더함으로써 오히려 한바퀴를 건너뛰어서 최소값으로 돌아가버린다.

    return 0;
}