/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct student_t
{
    int kor;
    int eng;
    int mat;
};

void sum(struct student_t* student)
{
    int i = 0;
    int sumk = 0;
    int sume = 0;
    int summ = 0;
    
    for (i; i < 3; i++)
    {
        sumk = sumk + student[i].kor;
        sume = sumk + student[i].eng;
        summ = sumk + student[i].mat;
    }
    printf("���� : %5d%5d%5d\n", sumk, sume, summ);
}

void avg(struct student_t* student)
{
    double avgk = 0;
    double avge = 0;
    double avgm = 0;
    for (int i = 0; i < 3; i++)
    {
        avgk = avgk + student[i].kor;
        avge = avge + student[i].eng;
        avgm = avgm + student[i].mat;
    }
    avgk = avgk / 3;
    avge = avge / 3;
    avgm = avgm / 3;
    printf("��� : %5.1lf%5.1f%5.1f\n", avgk, avge, avgm);
}

int main(void) 
{
    struct student_t student[3];
    
    for (int i = 0; i < 3; i++)
    {
        printf("%d��° �л��� ������ �Է��ϼ���\n", i + 1);
        printf("%d��° �л��� ���� ���� : ", i + 1);
        scanf("%d", &student[i].kor);
        printf("%d��° �л��� ���� ���� : ", i + 1);
        scanf("%d", &student[i].eng);
        printf("%d��° �л��� ���� ���� : ", i + 1);
        scanf("%d", &student[i].mat);
    }
    sum(student);
    avg(student);

	system("pause");
	return EXIT_SUCCESS;
}