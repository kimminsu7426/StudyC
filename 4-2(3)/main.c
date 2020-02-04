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
    int hour, min, sce;
    double time = 3.76;

    hour = (int)time; // 시간단위 : 3
    time = time - hour; // 분 단위 : 3.76 - 3 = 0.76
    time = time * 60.0; // 0.76 을 분단위로 45.6
    min = (int)time; // 분 단위 저장
    time = time - min; // 초 단위 분리
    sce = time * 60.0; // 초 단위로 환산 후 저장

    printf("3.76시간은 %d시간 %d분 %d초입니다.\n", hour, min, sce); 
    


	system("pause");
	return EXIT_SUCCESS;
}