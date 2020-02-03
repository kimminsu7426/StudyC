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
	
    char ch;

    printf("문자 입력 : ");
    scanf("%c", &ch);
    printf("%c문자의 아스키 코드 값은 %d입니다.", ch, ch);

	system("pause");
	return EXIT_SUCCESS;
}