#include "main.h"

/**
 * _strcat - concatenates two strings
 * @Dest: This is the first srting
 * @src: This is the second string
 *
 * Return: Return Dest
 */

char *_strcat(char *dest, char *src)
{
	int a, b;
	
	a = 0;

	for (a = 0; dest[a] != '\0'; ++a)
	{
	}
	for (b = 0; src[b] != '\0'; ++b, ++a)
	{
		dest[a] =src[b];
	}
	dest[a] = '\0';

	return (dest);
}
