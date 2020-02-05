/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 / 정적변수 학습
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - Hugo MG Sung.
*/

void *sum(int a, int b);

#include <stdio.h>
#include <stdlib.h>
// 메인함수
int main(void) 
{
    int a = 10, b = 20;
    int* res = sum(a, b);
    printf("합 = %d\n", *res);

    	system("pause");
	return EXIT_SUCCESS;
}

void *sum(int a, int b)
{
    static int res;
    res = a + b;
    return &res;
}

