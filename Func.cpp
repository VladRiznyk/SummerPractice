#define SIZE 1000
#include "function.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int array[SIZE]; 
void random_arr() { \
	for (int i = 0; i < SIZE; i++) 
	{ 
		array[i] = rand() % 41 + (-20); // генератор рандомных чисел от -20 до 20
		printf("%5d", array[i]);
	}
	exit; // exit
}
int zerocount() { // реализаци€ ф-ции zerocount
	int zero_count = 0, max = 0; 
	for (int i = 0; i < SIZE; i++)
	{
		if (array[i] == 0) zero_count += 1;
		else {
			if (zero_count > max) max = zero_count;
			zero_count = 0;
		}
	}
	return max; 
}