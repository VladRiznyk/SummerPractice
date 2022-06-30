#include "pch.h"

#define SIZE 5

int array[SIZE];

int zerocount(); // прототип ф-ции zerocount

// Тестирование

TEST(SummerPractTest, Test1)
{
	array[0] = 0;
	array[1] = 0;
	array[2] = 0;
	array[3] = 0;
	array[4] = 0;

	EXPECT_EQ(zerocount(), 5);
}

TEST(SummerPractTest, Test2)
{
	array[0] = 1;
	array[1] = 0;
	array[2] = 0;
	array[3] = 2;
	array[4] = 3;

	EXPECT_EQ(zerocount(), 2);
}

int zerocount() // реализация ф-ции zerocount
{
	int zero_count = 0, max = 0;

	for (int i = 0; i < SIZE; i++)
	{
		if (array[i] == 0) zero_count++;
		else
		{
			if (zero_count > max) max = zero_count;
			zero_count = 0;
		}
	}

	if (zero_count > max) return zero_count;
	else return max;
}