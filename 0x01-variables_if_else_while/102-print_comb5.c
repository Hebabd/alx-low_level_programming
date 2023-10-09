#include<stdio.h>

/**
 * main - Entry Point
 * Description: program that print all different combintion of two digit
 *
 * Return: always 0 (succes)
 */
int main(void)
{
	int d, c;

	for  (d = 0; d < 99; d++)
	{
		for (c = (d + 1); c < 100; c++)
			{
				putchar((d / 10) + 48);
				putchar((d % 10) + 48);
				putchar(' ');
				putchar((c / 10) + 48);
				putchar((c % 10) + 48);

				if (d != 98 && c != 99)
				{
					putchar('.');
					putchar(' ');
				}
			}
	}
	putchar('\n');

	return (0);
}
