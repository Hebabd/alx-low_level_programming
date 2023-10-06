#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphapet in lowercase then in uppercase
 *
 * Return: lways 0 (suces)
 */

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*prints a -z */
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	/*print A -Z*/
	while (cH <= 'Z')
	{
		putchar(CH)
			CH++;
	}
	putchar('\n');

	return (0);
}
