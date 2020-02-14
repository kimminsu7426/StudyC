/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

//학생 3명의 학급에서 각각 국어 영어 수학의 시험 성적을 입력 받은 후, 
//각 과목 총합과 평균을 출력하는 프로그램을 작성하시오.
//먼저 국어, 영어, 수학 성적을 멤버로 하는 구조체 student_t 를 정의한다.
//학생이 3명이므로 student_t 타입의 변수 3개, 혹은 배열을 정의하여, 
//해당 변수에 성적을 입력받는다.각 과목의 총합을 구하는 함수를 각각 작성하여 
//총합과 평균을 구한 후 이를 출력한다.

#include <stdio.h>
#include <stdlib.h>

struct student_t
{
    int korean;
    int english;
    int math;
};

void sum(struct student_t* Student)
{
    int sumk = 0;
    int sume = 0;
    int summ = 0;

    for (int j = 0; j < 3; j++)
    {
        sumk += Student[j].korean;
        sume += Student[j].english;
        summ += Student[j].math;
    }

    printf("총합    %d    %d    %d\n", sumk, sume, summ);
}

void avg(struct student_t* Student)
{
    double sumk = 0;
    double sume = 0;
    double summ = 0;

    for (int j = 0; j < 3; j++)
    {
        sumk += Student[j].korean;
        sume += Student[j].english;
        summ += Student[j].math;
    }

    sumk = sumk / 3;
    sume = sume / 3;
    summ = summ / 3;

    printf("평균  %.1lf  %.1lf  %.1lf\n", sumk, sume, summ);
}

// 메인함수
int main(void)
{
    struct student_t Student[3]; //student에 struct student_t 요소가 3개인 구조체 배열 선언

    for (int i = 0; i < 3; i++)
    {
        printf("%d번째 학생의 성적을 입력 하세요\n", i + 1);
        printf("국어 성적 : ");
        scanf("%d", &Student[i].korean);
        printf("영어 성적 : ");
        scanf("%d", &Student[i].english);
        printf("수학 성적 : ");
        scanf("%d", &Student[i].math);
        printf("\n");
    }

    printf("      국어  영어  수학\n");
    sum(Student);
    avg(Student);

    system("pause");
    return EXIT_SUCCESS;
}