/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 / 
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 메인함수
struct address
{
    char name[20];
    int age;
    char tel[20];
    char addr[80];
};

void print_list(struct  address* lp);

int main(void) 
{
    struct address list[5] =
    {
        {"홍길동", 11, "111-1111", "울릉도 독도"},
        {"이순신", 22, "222-2222", "경상북도 포항"},
        {"장보고", 33, "333-3333", "경상북도 대구"},
        {"유관순", 44, "444-4444", "경상북도 경주"},
        {"안중군", 55, "555-5555", "경상남도 부산"}
    };
   
    print_list(list);
    
    system("pause");
	return EXIT_SUCCESS;
}
void print_list(struct  address* lp)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%10s%10d%10s%20s\n",
            (lp + i)->name, (lp + i)->age, (lp + i)->tel, (lp + i)->addr);
    }
}