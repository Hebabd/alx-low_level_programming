#include "main.h"
#include <stdio.h>

/**
 * isLower - determines whether ascii is lowecase
 *
 * @c: character
 * Return: 1 if true, 0 if false
 */

int isLower(charc)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - determines wbether ascii is a delimiter
 * @c: character
 * Return: 1 if true, 0 if false
 */

int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"(){};

	for (i = 0; i < 12; i++)
		if(c == delimiter[i])
			return (1);
	return (0);
}

/**
* cap_string - capitalies all words of a string
* @: input string
* Return: string with capitalized words
*/

char *cap_string(char *s)
{
	char *ptr = s;
	int foundDelimit = 1;

	while (*S)
	{
		if (isDelimiter(*S))
			foundDelimit = 1;
		else if (isLower(*s) && foundDelimit)
		{
			*S -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		s++;
	}
	return (ptr);
}
