#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print in reverse a-z
 *
 * Return: Always 0 (succes)
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
