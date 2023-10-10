#include "main.h"

/**
 *print_alphabet -the _putchar function  to print lower cas the alphapet a - z
 *
 *Description: print all lowercase letter
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a' ; ch <= 'z'; ch++)
		_putchar(ch);

	_putchar('\n');
}
