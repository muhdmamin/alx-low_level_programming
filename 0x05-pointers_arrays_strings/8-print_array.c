#include "main.h"
#include <stdio.h>



/**
 * print_array - Prints an inputted number of elements
 * of an array of integers.
 * @a: The array of integers.
 * @n: The number of elements to be printed.
 */

void print_array(int *a, int n)
{
	int = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));

		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
