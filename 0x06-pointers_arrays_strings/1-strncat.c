#include "main.h"

/**
 * _strncat - Concntenates two strings uning n bytes
 * @dest: First string
 * @src:: second string
 * @n - n bytes
 * Return: Dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int l = 0;
	int i;

	for ( l = 0; dest[l] != '\0'; l++)
	{

	}
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[l + i] = src[i];
		dest[l + i] = '\0';
	}

               return (dest);
}
