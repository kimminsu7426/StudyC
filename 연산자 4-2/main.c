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
	
    /*
    int res; 

    res = sizeof(short) > sizeof(long);

    printf("%s\n", (res == 1) ? "short" : "long");
    */

    int seats = 70, audience = 65;
    double rate;

    rate = (double)audience / (double)seats * 100.0;
    //printf("%.1lf\n", (double)audience / (double)seats);
    printf("����� : %.1lf%%\n", rate);
     

	system("pause");
	return EXIT_SUCCESS;
}