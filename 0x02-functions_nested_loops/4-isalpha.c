#include "main.h"

/**
 *_isalpha -  check letter c lowercase or upper
 *
 * @c: takes input
 * Return: is 1 is c , 0 if other wise
 */


int _isalpha(int c)

{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
