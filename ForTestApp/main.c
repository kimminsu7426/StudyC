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
    /*int i;

    for (i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    */
   
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        if ((i % 3) == 0) {
            continue;
        }
        sum = sum + i;

    }
    printf("sum = %d\n", sum);


	system("pause");
	return EXIT_SUCCESS;
}