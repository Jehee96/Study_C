#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // 메모리 할당 부분
    int i, x, y;
    int** pptr = (int**)malloc(sizeof(int*) * 8); // 8개의 int 포이넡를 저장할 수 있는 이중 포인터 공간을 할당. 8행을 가진 2차원 배열의 첫 단계.
    
    // 각 행에 대한 메모리 할당
    for (i = 0; i < 8; i++)
    {
        *(pptr + i) = (int *)malloc(sizeof(int) * 6); // 각 행마다 6개의 int값을 저장할 수 있는 공간을 할당. 8 * 6 크기의 2차원 배열 생성.
    }
    
    for (y = 0; y < 8; y++)
    {
        for (x = 0; x < 6; x++)
        {
            *(*(pptr + y) + x) = 6 * y + x; // *(*(pptr + y) + x)는 pptr[y][x]와 동일한 표현, 6 * y + x는 0부터 시작하여 순자적으로 증가하는 값을 생성.
        }
    }

    // 데이터 출력
    for (y = 0; y < 8; y++)
    {
        for (x = 0; x < 6; x++)
        {
            // %3d : 출력할 공간을 3칸으로 지정하여 10진수 정수로 출력
            printf("%3d", *(*(pptr + y) + x)); // "%d, 5" -> 출력 : 5 (공간 지정 없음) / "%3d, 5" -> 출력 : __5 (3칸을 확보하고 오른쪽 정렬. _는 공백을 의미)
        }
        printf("\n");
    }
    
    // 메모리 해제
    for (y = 0; y < 8; y++)
    {
        free(*(pptr + y));
    }
    free(pptr);

    return 0;
}