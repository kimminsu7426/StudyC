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
    char animal[5][20];
    int i;
    int count;
      
    count = sizeof(animal) / sizeof(animal[0]); // 100 / 20 byte
    for (i = 0; i < count; i++)
    {
        scanf("%s", animal[i]);
    }
    for (i = 0; i < count; i++)
    {
        printf("%s ", animal[i]);
    }

	system("pause");
	return EXIT_SUCCESS;
}