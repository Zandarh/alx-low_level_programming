#include "main.h"

/**
 * print_diagsums - sum of two diagonals of a square matix of integer
 * @a: Int 1
 * @size: size of int
 *
 * Return: Return noting
**/


void print_diagsums(int *a, int size)
{
	int c, sum1, sum2;
	sum1 = 0; 
	sum2 = 0;

	for (c = 0; c < (size * size); c++)
	{
		if (c % (size + 1) == 0)
			sum1 += *(c + a);
		if (c % (size - 1) == 0 && c != 0 && c < size * size - 1)
			sum2 += *(c + 1);
	}
	printf("%x, %d\n", sum1, sum2);
}
