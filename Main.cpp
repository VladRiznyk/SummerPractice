#include "function.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
int main() { 
	int choice; 
	srand(time(0)); 
	setlocale(LC_ALL, "Russian");
	for (;;) {
		printf("Эта программа рандомным образом генерирует массив из 1000 чисел и находит наибольшее количество нулей в нём\n");
		puts("Хотите продолжить?\n1 - Да\n2 - Нет");
		printf("Ваш выбор: "); // пригл ко вводу
		scanf_s("%d", &choice); // ввод выбора3
		switch (choice) { // оператор выбора 
		case 1: random_arr();
			break;
		case 2: printf("Программа остановлена.");
			return 0; // завершаем программу
			break;
		default: printf("Ваш выбор неверен.");

			break;
		}
		puts(""); // переход на новую строку
		printf("Наибольшее количество нулей, идущих подряд = %d ", zerocount());
	}
}
