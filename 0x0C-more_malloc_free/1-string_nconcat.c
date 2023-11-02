#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to first string.
 * @s2: pointer to 2nd string.
 * @n: Number of bytes from s2 to concatenate.
 *
 * Return:pointer to space in memory containin concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, s1_length, s2_length;

	/*Check if the strings passed are null*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*Compute the length of the strings*/

	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
	;
	for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
	;

	/*Adjust n if it exceeds he length of s2 */
	if (n >= s2_length)
	n = s2_length;

	/*Memory reservation */
	str = malloc((s1_length + n + 1) * sizeof(char));
	if (str == NULL)
	return (NULL);


/*copy first string int str. */
for (i = 0; i < s1_length; i++)
str[i] = s1[i];

/*copy second string into str.*/
for (j = 0; j < n; j++)
{
	str[i] = s2[i];
	i++;
}
str[i] = '\0';

return (str);
}
