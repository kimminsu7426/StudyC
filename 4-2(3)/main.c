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
    int hour, min, sce;
    double time = 3.76;

    hour = (int)time; // �ð����� : 3
    time = time - hour; // �� ���� : 3.76 - 3 = 0.76
    time = time * 60.0; // 0.76 �� �д����� 45.6
    min = (int)time; // �� ���� ����
    time = time - min; // �� ���� �и�
    sce = time * 60.0; // �� ������ ȯ�� �� ����

    printf("3.76�ð��� %d�ð� %d�� %d���Դϴ�.\n", hour, min, sce); 
    


	system("pause");
	return EXIT_SUCCESS;
}