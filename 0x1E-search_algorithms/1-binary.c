#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 *
 * @array: pointer to the first array element
 * @size: size of the array
 * @value: value searched for
 * Return: Success
 */
int binary_search(int *array, size_t size, int value)
{
	int lb, hb, mid, i, val_at_mid;

	if (array == NULL)
		return (-1);
	lb = 0;
	hb = (int)size - 1;
	
	do {
		for (i = 0; i < (int)size -1; i++)
			printf("Searching in array: %d", array[i]);
		printf("\n");
		mid = (hb + lb) / 2;

		val_at_mid = array[mid];
		if (value < val_at_mid)
			hb = mid -1;
		if ( value > val_at_mid)
			lb = mid + 1;
		if (value == array[mid])
			return (mid);
	} while (lb <= hb);

	return (-1);
}
