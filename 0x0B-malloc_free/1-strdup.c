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

	i = 0;
	while (str[i] != '\0')
		i++;

	a = malloc(sizeof(char) * (i = 1));

	if (a == NULL)
		return (NULL);


	for (r = 0; str[r]; r++)
		a[r] = str[r];
		return (a);
}
