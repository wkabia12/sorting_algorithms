#include "sort.h"

/**
 * swap_int - Swaps two numbers
 * @a: Pointer to the first number
 * @b: Pointer to the second number
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}

/**
 * selection_sort - Sort an array using Selection Sort method
 * @array: The array to sort
 * @size: The size of the array
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min = 0;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}

		if (i != min)
		{
			swap_int(&array[min], &array[i]);
			print_array(array, size);
		}
	}
}
