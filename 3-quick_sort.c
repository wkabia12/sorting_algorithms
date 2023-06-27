#include "sort.h"

/**
 * swap_ints - Swaps two integers in an array.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 */
void swap_ints(int *a, int *b)
{
        int tmp = *a;
        *a = *b;
        *b = tmp;
}

/**
 * partition - Lomuto partition scheme for quicksort.
 * @array: The array to be partitioned.
 * @low: The starting index of the partition.
 * @high: The ending index of the partition.
 * @size: The size of the array.
 *
 * Return: The final partition index.
 */
int partition(int *array, int low, int high, size_t size)
{
        int pivot = array[high];
        int i = low - 1;
        int j;

        for (j = low; j <= high - 1; j++)
        {
                if (array[j] <= pivot)
                {
                        i++;
                        swap_ints(&array[i], &array[j]);
                        print_array(array, size);
                }
        }

        swap_ints(&array[i + 1], &array[high]);
        print_array(array, size);

        return (i + 1);
}

/**
 * quicksort - Recursive function to perform quicksort.
 * @array: The array to be sorted.
 * @low: The starting index of the partition.
 * @high: The ending index of the partition.
 * @size: The size of the array.
 */
void quicksort(int *array, int low, int high, size_t size)
{
        if (low < high)
        {
                int pi = partition(array, low, high, size);

                quicksort(array, low, pi - 1, size);
                quicksort(array, pi + 1, high, size);
        }
}

/**
 * quick_sort - Sorts an array of integers in ascending order using quicksort.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void quick_sort(int *array, size_t size)
{
        if (array == NULL || size < 2)
                return;

        quicksort(array, 0, size - 1, size);
}
