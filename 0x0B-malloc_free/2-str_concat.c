#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string2
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2, len;
	char *re;

	len1 = len2 = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			len2++;
	}

	len = len1 + len2;
	re = (char *)malloc(sizeof(char) * (len + 1));
	if (re == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		re[i] = s1[i];
	for (j = 0; j < len2; j++, i++)
		re[i] = s2[j];

	re[len] = '\0';

	return (re);
}
