#include "search_algos.h"
/**
 * linear_search - searches for an element by element
 * @array: array to search
 * @size: size of array
 * @value: target to search
 * Return: int
 **/
int linear_search(int *array, size_t size, int value)
{
	size_t iter = 0;

	while (iter < size)
	{
		printf("Value checked array[%ld] = [%d]\n", iter, *(array + iter));
		if (value == (array[iter]))
		{
			return (iter);
		}
		iter++;
	}
	return (-1);
}
