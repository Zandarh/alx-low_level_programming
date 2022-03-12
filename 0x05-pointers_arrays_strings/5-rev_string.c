#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Declaration of *s
 * Return: void
*/

void rev_string(char *s)
{
	int a;
	
	for (a = 0; s[a] != 0; a++)
	{
	}
	for (a = a - 1; a >= 0; a--)
	{
		rev_string(s[a]);
	}
}
