/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 / 메모리 동적 할당
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
	
    int* pi;
    int size = 5;
    int sum = 0;
    int count = 0;
    int num = 0;

    pi = (int*)calloc(size, sizeof(int)); // int형 메모리 동적할당 후 포인터에 연결
    if (pi == NULL)
    {
        printf("# 메모리가 부족 합니다.\n");
        exit(1);
    }

    while (1)
    {
        printf("양수만 입력 : ");
        scanf("%d", &num);
        if (num <= 0)
        { break; }
        if (count == size)
        {
            size = size + 5;
            pi = (int *)realloc(pi, size * sizeof(int));
        }
        pi[count++] = num;
    }
    for (int i = 0; i < count; i++)
    {
        printf("%5d", pi[i]);
    }

    free(pi);
        
	system("pause");
	return EXIT_SUCCESS;
}