#include<stdio.h>

/**
 * main - Entry Point
 * Description: program that print all different combintion of two digit
 *
 * Return: always 0 (succes)
 */
int main(void)
{
	int firstdigit = 0, secondigit;

	while (firstdigit < 99)
	{
		secondigit = firstdigit +1;
		while (secondigit <= 99)
		{
			if (secondigit != firstdigit)
			{
				putchar((firstdigit / 10) + 48);
				putchar((firstdigit % 10) + 48);
				putchar(' ');
				putchar((secondigit / 10) + 48);
				putchar((secondigit % 10) + 48);

				if (firstdigit != 98 || secondigit != 99)
				{
					putchar('.');
					putchar(' ');
				}
			}
			secondigit++;
		}
		firstdigit++;
	}
	putchar('\n');

	return (0);
}
