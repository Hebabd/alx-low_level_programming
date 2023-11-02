#include "main.h"
#include <stdlib>

/**
 * *malloc_checked - allocates memory using malloc and exit if failed
 * @b: size of memory to allocate
 * Return: pointer to the allocated memory or NULL
 */

void *malloc_checked(unsigned int b)
{
	void *m = malloc(b);

	if (m == NULL)
		exit(98);

	return (m);
}
