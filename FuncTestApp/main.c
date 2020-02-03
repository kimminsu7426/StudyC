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

//int sum(int x, int y);
//void print_char(char cr, int count);
void fruit(void);
// 메인함수
int main(void) 

{
    fruit();

    return 0;
	system("pause");
	return EXIT_SUCCESS;
}

void fruit(void)
{
    printf("apple\n");
    fruit();
}
/*int sum(int x, int y)
{
    int temp;
    temp = x + y;
    return temp;
}
*/

/*void print_char(char ch, int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%c", ch);
    }
    return;
}
*/

