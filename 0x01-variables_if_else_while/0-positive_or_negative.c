#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print postive or negative or zero
 *
 * Descriptin : A C programme for training
 *
 * Return:Alwways 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);
	return (0);
}
