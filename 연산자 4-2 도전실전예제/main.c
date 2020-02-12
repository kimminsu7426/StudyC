/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.11
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 메인함수
int main(void) 
{
    int kg;
    double cm;
    double bmi;

    printf("몸무게(kg), 키(cm) 입력 : ");
    scanf("%d%lf", &kg, &cm);
    bmi = kg / (cm * cm);
	
    if (bmi >= 20.0 && bmi<25.0)
    {
        printf("표준입니다.\n");
    }
    else
    {
        printf("체중관리가 필요합니다\n");
    }
    
    system("pause");
	return EXIT_SUCCESS;
}