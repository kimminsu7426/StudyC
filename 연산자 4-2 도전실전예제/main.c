/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.11
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// �����Լ�
int main(void) 
{
    int kg;
    double cm;
    double bmi;

    printf("������(kg), Ű(cm) �Է� : ");
    scanf("%d%lf", &kg, &cm);
    bmi = kg / (cm * cm);
	
    if (bmi >= 20.0 && bmi<25.0)
    {
        printf("ǥ���Դϴ�.\n");
    }
    else
    {
        printf("ü�߰����� �ʿ��մϴ�\n");
    }
    
    system("pause");
	return EXIT_SUCCESS;
}