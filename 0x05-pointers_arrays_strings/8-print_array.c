#include "main.h"
#include <stdio.h>

/**
* print_array - Prints n elements of an array of integers,
*               followed by a new line.
*
* @a: Pointer to the array of integers to print.
* @n: Number of elements of the array to print.
*
* Return: void.
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

	if (i != n - 1)
	{
		printf(", ");
	}
	}

	printf("\n");
}

