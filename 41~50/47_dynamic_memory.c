#include <stdio.h>
#include <stdlib.h>

/*
Dynamic Memory Allocation(동적 메모리할당)이란, 프로그램이 실행 도중에 동적으로 메모리를 할당 받는 것을 말한다.
프로그램에서는 필요한 만큼의 메모리를 시스템으로부터 할당을 받아서 사용하고, 사용이 끝나면 시스템에 메모리를 반납한다.
필요한 만큼만 할당을 받고 또 필요한 때에 사용하고 반납해 메모리를 효율적으로 사용할 수 있다.
동적 메모리는 mallor() 계열의 라이브러리 함수를 사용하여 할당 받아 사용할 수 있다.
동적 메모리의 사용이 끝나면 반드시 해당 메모리 영역을 명시적으로 반납해야 한다.
*/

int main(void)
{
    int *pi; // Pointer Integer
    pi = (int *)malloc(sizeof(int)); // malloc() : 메모리를 할당해라.
    if (pi == NULL)
    {
        printf("동적 메모리 할당에 실패했습니다.\n");
        exit(1);
    }
    *pi = 100;
    printf("%d\n", *pi);
    // 동적 메모리 사용한 이후에는 무조건 해당 메모리를 반환한다.
    free(pi); // free() : 메모리 해제
    
    return 0;
}