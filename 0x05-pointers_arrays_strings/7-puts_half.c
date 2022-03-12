#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: Declaration of *str
 *Return: void
*/

void puts_half(char *str)
{
	int n, m;
	char i;

	for (n = 0; str[n] != 0; n++)
	{
	}
	if (n % 2 == 0)
	{
		for ((m = n/ 2); str[m] != 0; m++)
		{
			i = str[m];
				_putchar(i);
		}
	}
	else
	{
		for ((m = (n - 1) / 2); str[m] != 0; m++)
		{
			i = str[m];
			_putchar(i);
		}
	}
	_putchar('\n');
}
