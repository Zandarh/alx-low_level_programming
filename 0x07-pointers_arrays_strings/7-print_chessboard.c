#include "main.h"

/**
 * print_chessbord - prints the chessboard
 * @char: 2D character array 
 *
 * Return: No return
**/

void print_chessboard(char (*a)[8])
{
	int i, j, k;

	for (i = 0; i < 8; i++)
	{
		_putchar('\n')
		for (j = 0; j< 8; j++)
		{
			_putchar(*(*(a + i) + j));
		}
	}
	_putchar('\n')
}
