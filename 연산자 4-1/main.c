/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    int kor=3, eng=5, mat=4;
    int credits;
    int res;

    double kscore = 3.8, escore = 4.4, mscore = 3.9;
    double grade;

    credits = kor + eng + mat;
    grade = (kscore + escore + mscore) / 3;

    res = (credits >= 10) && (grade > 4.0);
    
    printf("%d\n", credits);
    printf("%.1lf\n", grade);
    printf("%d\n", res);


	system("pause");
	return EXIT_SUCCESS;
}