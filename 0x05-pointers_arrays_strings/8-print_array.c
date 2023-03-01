#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: array
 * @b: number of values to be printed
 */
void print_array(int *a, int b)
{
	int i;

	for (i = 0; i < b; i++)
	{
		printf("%d", a[i]);
		if (i != b - 1)
			printf(", ");
	}

	printf("\n");
}
