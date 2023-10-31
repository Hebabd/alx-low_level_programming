#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - return a pointer to a newly allocted space in memory
 * which contains a  copy of the string given as a parameter.
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	int i, r = 0;
	char *a;

	if (str == NULL)
		return (NULL);


	while (str[r] != '\0')
		r++;

	a = (char *)malloc((sizeof(char) * r) + 1);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < r; i++)
		a[i] = str[i];
	a[r] = '\0';

		return (a);
}
