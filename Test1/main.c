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
    int kor=70, eng=80, mat=90;
    int tot;

    tot = kor + eng + mat;
    printf("���� : %d, ���� : %d, ���� : %d\n", kor, eng, mat);
    printf("���� : %d\n", tot);

	system("pause");
	return EXIT_SUCCESS;
}