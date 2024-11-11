#include <stdio.h>  // 표준 입출력 함수를 위한 헤더
#include <stdlib.h> // malloc, free 함수를 위한 헤더
#include <string.h> // strcpy 함수를 위한 헤더

// Student 구조체 정의
// typedef를 사용하여 struct Student 대신 Student로 사용 가능
typedef struct {
    int id;
    char* name;
    float score;
} Student;

// 학생 정보를 출력하는 함수
// 매개변수로 Student 구조체의 포인터를 받음.
void printStudent(Student* student) {
    printf("ID : %d, 이름 : %s, 점수 : %.1f\n",
    student->id, // 화살표 연산자로 구조체 포인터의 멤버에 접근
    student->name,
    student->score);
}

int main(void)
{
    // malloc을 사용한 단일 구조체 할당
    // sizeof(Student)로 구조체 크기만큼의 메모리 할당
    Student* student = (Student*)malloc(sizeof(Student));
    if (student == NULL)
    {
        printf("메모리 할당 실패\n");
        return 1; // 프로그램 종료
    }

    // 구조체 멤버 name에 대한 메모리 할당
    // 20개의 문자를 저장할 수 있는 공간 할당
    student->name = (char*)malloc(20 * sizeof(char));
    if (student->name == NULL)
    {
        printf("이름 메모리 할당 실패\n");
        free(student); // 이미 할당된 구조체 메모리 해제
        return 1;
    }
    
    // 데이터 입력
    student->id = 1;
    strcpy(student->name, "별이"); // 문자열 복사
    student->score = 90.5;

    // 데이터 출력
    printf(" --- malloc으로 할당한 학생 정보 ---\n");
    printStudent(student);

    // 메모리 해제
    // 반드시 할당의 역순으로 해제
    free(student->name);
    free(student);
    
    return 0;
}