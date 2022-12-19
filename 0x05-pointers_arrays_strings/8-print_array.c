#include "main.h"
#include <stdio.h>

/**
 * print_arrays - prints n elements of an array
 * @a: array
 * @n: number of values to bee printed
 */
void print_array(int *a, int  n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}

	printf("\n");
