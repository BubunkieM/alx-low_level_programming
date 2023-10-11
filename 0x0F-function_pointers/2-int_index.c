#include "function_pointers"
/**
 * int_index - returns index placeif comparison is true
 * else -1
 * @array: array
 * @size: element size
 * @cmp: pointer to func of 3 in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (1);
	}
	return (-1)
}
