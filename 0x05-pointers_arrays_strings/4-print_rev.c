#include "main.h"

/**
 * print_rev - prints a string in revrse followed by a new line
 * @char *s: Declaration of a character *s
 * Return: No return
 */

void print_rev(char *s)
{
	int a;

	for ( a = 0; *s[a] != 0; a++)
	{
		print_rev(*s[a]);
	}
	_putchar('\n');
}
