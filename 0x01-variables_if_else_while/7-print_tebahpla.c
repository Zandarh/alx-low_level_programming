#include <stdio.h>

/**
 * main - print the letters of the alphabeth
 *
 * Description: print the letters of the alphabeth in reverse
 *
 * Return: Always 0 (Succcess)
*/

int main(void)
{
	int i = 122;

	while (i > 96)
	{
	putchar(i);
	i--;
	}
	putchar(10);

	return (0);
}
