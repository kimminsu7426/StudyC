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
    int a = 0, b = 0;
  
    char c = 0;

    printf("사칙연산 입력(정수) : ");
    scanf("%d %c %d", &a, &c, &b);
   
     if (c == '+')
    {
        printf("%d + %d = %d\n", a, b, a+b);
    }
    else if (c == '*')
    {
        printf("%d * %d=%d\n", a, b, a*b);
    }
    else if (c == '/')
    {
        printf("%d / %d=%d\n", a, b, a/b);
    }
    else 
    {
        printf("%d - %d=%d\n", a, b, a-b);
    }
   
	system("pause");
	return 0;
}