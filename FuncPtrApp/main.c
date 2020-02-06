/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 // 함수 포인터
  --------------------------------------------------------------------------------
  first created - 2020.02.06
  writer - Hugo MG Sung.
*/

#include <stdio.h>



void func(int (*fp)(int a, int b));

int sum(int a, int b);
int mul(int a, int b);
int max(int a, int b);

// 메인함수
int main(void) 
{
   
    int sel;

    printf("01 두 정수의 합\n");
    printf("02 두 정수의 곱\n");
    printf("03 두 정수 중에서 큰 값 계산\n");
    printf("원하는 연산을 선택하세요 : \n");
    scanf("%d", &sel);

    switch (sel)
    {
    case 1: func(sum); break;
    case 2: func(mul); break;   
    case 3: func(max); break;
    }


	system("pause");
	return 0;
}

void func(int (*fp)(int a, int b))
{
    int a, b;
    int res;

    printf("두 정수의 값을 입력하세요 :");
    scanf("%d%d", &a, &b);
    res = fp(a, b);
    printf("결괏값은 : %d\n", res);
}


int sum(int a, int b)
{
    return (a + b);
}

int mul(int a, int b)
{
    return (a * b);
}

int max(int a, int b)
{
    if (a > b) return a;
    else return b;
}