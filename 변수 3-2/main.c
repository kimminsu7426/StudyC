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
	
    char ch;

    printf("���� �Է� : ");
    scanf("%c", &ch);
    printf("%c������ �ƽ�Ű �ڵ� ���� %d�Դϴ�.", ch, ch);

	system("pause");
	return EXIT_SUCCESS;
}