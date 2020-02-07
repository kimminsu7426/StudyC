/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ� / 
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �����Լ�
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
        {"ȫ�浿", 11, "111-1111", "�︪�� ����"},
        {"�̼���", 22, "222-2222", "���ϵ� ����"},
        {"�庸��", 33, "333-3333", "���ϵ� �뱸"},
        {"������", 44, "444-4444", "���ϵ� ����"},
        {"���߱�", 55, "555-5555", "��󳲵� �λ�"}
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