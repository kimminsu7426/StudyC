/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

//�л� 3���� �б޿��� ���� ���� ���� ������ ���� ������ �Է� ���� ��, 
//�� ���� ���հ� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� ����, ����, ���� ������ ����� �ϴ� ����ü student_t �� �����Ѵ�.
//�л��� 3���̹Ƿ� student_t Ÿ���� ���� 3��, Ȥ�� �迭�� �����Ͽ�, 
//�ش� ������ ������ �Է¹޴´�.�� ������ ������ ���ϴ� �Լ��� ���� �ۼ��Ͽ� 
//���հ� ����� ���� �� �̸� ����Ѵ�.

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

    printf("����    %d    %d    %d\n", sumk, sume, summ);
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

    printf("���  %.1lf  %.1lf  %.1lf\n", sumk, sume, summ);
}

// �����Լ�
int main(void)
{
    struct student_t Student[3]; //student�� struct student_t ��Ұ� 3���� ����ü �迭 ����

    for (int i = 0; i < 3; i++)
    {
        printf("%d��° �л��� ������ �Է� �ϼ���\n", i + 1);
        printf("���� ���� : ");
        scanf("%d", &Student[i].korean);
        printf("���� ���� : ");
        scanf("%d", &Student[i].english);
        printf("���� ���� : ");
        scanf("%d", &Student[i].math);
        printf("\n");
    }

    printf("      ����  ����  ����\n");
    sum(Student);
    avg(Student);

    system("pause");
    return EXIT_SUCCESS;
}