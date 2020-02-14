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
    char a = '*';
    int i = 0, j = 0;

    for (int i = 0; i < 5; i++)
    {
        
        for (int j = 0; j < 5; j++)
        {
            if ((i == j) || (i + j == 4))
            {
                printf("%c", a);
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }



	system("pause");
	return EXIT_SUCCESS;
}