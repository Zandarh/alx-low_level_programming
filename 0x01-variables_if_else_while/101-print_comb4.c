#include <stdio.h>

/**
 * main - print triple combos
 *
 * Description: print triple digit combos
 *
 * Return: Always 0 (Success)
*/

int main(void0
{
	int i, j, k;

	i = 48;
	j = 48;
	k = 48;

	while (i < 58)
	{
		j = i + 1;
		while (j < 58)
		{
			putchar(i);
			putchar(j);
			putchar(k);
			if (i < 55 || j < 56 || k < 57)
			{
				putchar(44);
				putchar(32);
			}
			k++;
		}
		j++;
	}
	i++;
}
