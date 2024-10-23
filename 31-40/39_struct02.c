#include <stdio.h>
#include <stdlib.h>

struct student {
    int number;
    char name[10];
    double grade;
};

int main(void)
{
    struct student s;

    printf("학번을 입력하세요 : ");
    scanf("%d", &s.number);
    printf("이름을 입력하세요 : ");
    scanf("%s", s.name); // &를 붙일 필요가 없는 이유는 배열은 그 자체로 포인터의 의미를 가지고 있기 때문.(해당 배열의 주소 자체를 의미함.)
    printf("학점을 입력하세요 : ");
    scanf("%lf", &s.grade);


    printf("학번 : %d\n", s.number);
    printf("이름 : %s\n", s.name);
    printf("학점 : %.1f\n", s.grade);

    return 0;
}