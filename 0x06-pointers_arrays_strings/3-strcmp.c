#include "main.h"

/**
 * _strcmp - Compare two strings
 * @s1: String 1
 * @s2: String 2
 *
 * Return: S1
*/

int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int b = 0;

	for (a = 0; s1[a] != '\0'; a++)
	{
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
		if (s1[a] == s2[b])
		{
			return (s1[a]);
		}
	}

}
