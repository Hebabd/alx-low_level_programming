#include "main.h"

/**
 * print_line- print a straight line
 *
 * @n: is the number of times
 *
 *
 *
 */

void print_line(int n)
{
	int lin;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lin = 1; lin <= n; lin++)
			_putchar('_');
		_putchar('\n');
	}
}
