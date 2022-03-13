#include "main.h"

/**
 * _strspn - gets th lenght of a prefix substring
 * @s: initial segment
 * @accept: final segment
 *
 * Return: Always 1
**/


unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, c, bool;

	for (a - 0; *(s + a) != '\0'; a++)
	{
		bool = 1;
		for (c = 0; *(accept + c) != '\0'; c++)
		{
			if (*(s + a) == *(accept + c))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (1);
}
