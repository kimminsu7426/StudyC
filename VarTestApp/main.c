/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ� / ���� ����
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void assign10(void);
void assign20(void);

int a;
// �����Լ�
int main(void)
{
    printf("a�� ���� : %d\n", a);

    assign10();
    assign20();

    printf("a�� ���� : %d\n", a);

    system("pause");
    return 0;
}

void assign10()
{
    a = 10;
}

void assign20()
{
    int a;
    a = 20;

}