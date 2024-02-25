#include "sort.h"

/**
 * quick_sort_hoare - Sorts an array of integers in ascending order
 *                    using the Quick sort algorithm with Hoare partition scheme.
 * @array: Pointer to the array to be sorted
 * @size: Size of the array
 */
void quick_sort_hoare(int *array, size_t size) {
    if (array == NULL || size < 2) {
        return;  // Nothing to sort
    }

    recursive_quick_sort_hoare(array, 0, size - 1, size);
}

/**
 * recursive_quick_sort_hoare - Recursive function to perform Quick Sort
 * @array: Pointer to the array to be sorted
 * @low: Starting index of the partition to be sorted
 * @high: Ending index of the partition to be sorted
 * @size: Size of the array
 */
void recursive_quick_sort_hoare(int *array, int low, int high, size_t size) {
    if (low < high) {
        int pivot_index = hoare_partition(array, low, high, size);

        // Recursively sort the partitions
        recursive_quick_sort_hoare(array, low, pivot_index, size);
        recursive_quick_sort_hoare(array, pivot_index + 1, high, size);
    }
}

/**
 * hoare_partition - Performs Hoare partition for Quick Sort
 * @array: Pointer to the array
 * @low: Starting index of the partition
 * @high: Ending index of the partition
 * @size: Size of the array
 * Return: Index of the pivot element
 */
int hoare_partition(int *array, int low, int high, size_t size) {
    int pivot = array[high];
    int i = low - 1, j = high + 1;

    while (1) {
        do {
            i++;
        } while (array[i] < pivot);

        do {
            j--;
        } while (array[j] > pivot);

        if (i < j) {
            swap(&array[i], &array[j]);
            print_array(array, size);
        } else {
            return j;
        }
    }
}

/**
 * swap - Swaps two integers
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 */
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

