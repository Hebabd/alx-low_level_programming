#include "main.h"

/**
 * _puts - prints astring that followed by new line
 *@str : input string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');

}

