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

// �����Լ�
int main(void) 
{
	
    char grade;
    char name[20];

    printf("���� �Է� : ");
    scanf("%c", &grade);
    printf("�̸� �Է� : ");
    scanf("%s, name");
    printf("%s�� ������ %c�Դϴ�.\n", name, grade);


	system("pause");
	return EXIT_SUCCESS;
}