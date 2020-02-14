/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 // 문제
  --------------------------------------------------------------------------------
  first created - 2020.02.13
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 메인함수
char swap(int x);

struct student_t
{
    int kor;
    int eng;
    int mat;
};


int main(void) 
{
	
    /*1번문제 1~300사이의 3의 공배수의 합 출력

    int i = 0;
    int sum = 0;

    for ( i; i <= 300; i+=3)
    {
        sum = sum+i;      
    }
    printf("%d", sum);
    */
   
    
    
   /* int num;
    char ch;
    printf("점수 입력 : ");
    scanf("%d", &num);
    
    int i;
    i = swap(num);

    printf("학점 : %s\n", i);
	system("pause");
	return EXIT_SUCCESS;
}

char swap(int x)
{
   


    
    if ((x >= 90) && (x <= 100))
    {
        printf("A");
    }
    else if ((x >= 70) && (x < 90))
    {
        printf("B");
    }
    else if ((x >= 60) && (x < 70))
    {
        printf("C");
    }
    else if ((x >= 50) && (x < 60))
    {
        printf("D");
    }
    else
    {
        printf("F");
    }
    return swap;
    */
    
    system("pause");
    return EXIT_SUCCESS;


}
