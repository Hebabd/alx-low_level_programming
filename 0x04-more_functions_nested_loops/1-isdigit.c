#include "main.h"

/**
 * _isdigit - to determind the input is digit or not
 *
 * @c: input value
 *
 * Return: 1 if the input is digit . 0 if not
 */

int _isdigit(int c)
{
	if (c <= 48 && c <= 57)
		return (1);
	else
		return (0);
}
