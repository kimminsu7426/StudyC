/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ� / �������� �н�
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - Hugo MG Sung.
*/

void *sum(int a, int b);

#include <stdio.h>
#include <stdlib.h>
// �����Լ�
int main(void) 
{
    int a = 10, b = 20;
    int* res = sum(a, b);
    printf("�� = %d\n", *res);

    	system("pause");
	return EXIT_SUCCESS;
}

void *sum(int a, int b)
{
    static int res;
    res = a + b;
    return &res;
}

