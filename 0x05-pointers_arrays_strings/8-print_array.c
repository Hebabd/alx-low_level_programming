#include "main.h"

/**
 * print_array - print a element
 *
 * @n: element parameter in put
 * @a: string parameter input
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
