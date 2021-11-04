#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: array of ints
 * @size: number of elements in array
 * @cmp: pointer to function to compare values
 * Return: index of the first element for which cmp returns 0 or -1 if no match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
