#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print number if it positive or negative
 *
 * Description: using the main function
 * This program prints "Programming is positive, zero, or negative
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* my code starts here*/
	if (n > 0)
	{
		printf("%i if the number is greater than 0: is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%1 if the number is 0: is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%i if the number is less than 0: is negative\n", n);
	}
	return (0);
}
