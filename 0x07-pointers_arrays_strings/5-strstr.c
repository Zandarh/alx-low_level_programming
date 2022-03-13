#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string checked
 * @needle: substring found
 *
 * Return: Always return a char
**/

char *_strstr(char *haystack, chr *needle)
{
	int i, j;

	for (i = 0; needle[j]; j++)
	{
		if ((haystack[i] == needle[j]) || (haystack[i] >= needle[j]))
		{
			return (haystack);
		}
		else
			return (needle);
	}
}
