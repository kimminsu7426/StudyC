/*
	file : calc.c
	date : 2020.02.11
	name : kim min su
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "calc.h"

int get_total(int* data, int size)
{
	int Res = 0;
	for (int i = 0; i < size; i++)
	{
		Res += data[i];
	}
	return Res;
}

