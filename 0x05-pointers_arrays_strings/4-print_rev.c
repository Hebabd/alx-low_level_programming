#include "main.h"

/**
 * print_rev - prints astring in reverse
 *
 * @s: pointe to the string
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
