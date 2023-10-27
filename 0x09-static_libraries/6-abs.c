#include "main.h"

/**
 * _abs - function that computes the absolute
 *
 * @n: input integer
 *
 * Return: lways 0 (success)
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
