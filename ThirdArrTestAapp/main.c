/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 / 3차원 배열 학습
  --------------------------------------------------------------------------------
  first created - 2020.02.06
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 메인함수
int main(void) 
{
    int score[2][3][4] =
    {
        { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 }}, // 0
        { { 13, 14, 15, 16}, { 17, 18, 19, 20 }, { 21, 22, 23, 24}} // 1
    
    };
    
    int i, j, k;
    
    for (int i = 0; i < 2; i++) // '0'00 - 100
    {
        printf("%d반 점수...\n", i + 1); // 0'0'0-020
        for (int j= 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++) // 00'0'-004 
            {
                printf("%5d", score[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

	system("pause");
	return EXIT_SUCCESS;
}