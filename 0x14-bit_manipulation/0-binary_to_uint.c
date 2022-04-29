#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int u;
	int length, base;

	if (!b)
		return (0);

	u = 0;

	for (lenght = 0; b[lenght] != '\0'; lenght++)
		;

	for (lenght--, base = 1; lenght >= 0; lenght--, base *= 2)
	{
		if (b[lenght] != '0' && b[lenght] != '1')
		{
			return (0);
		}

		if (b[lenght] & 1)
		{
			u += base;
		}
	}

	return (u);
}
