#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - Will concatenate two strings
 * @s1: The string to concatenate
 * @s2: The second string to concatenate
 *
 * Return: The pointer to the new string, otherwise NULL.
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int x = 0, y = 0, len = 0, len1 = 0;

	while (s1 && s1[len])
		len++;
	while (s2 && s2[len1])
		len1++;

	s3 = malloc(sizeof(char) * (len + len1 + 1));
	if (s3 == NULL)
		return (NULL);

	x = 0;
	y = 0;

	if (s1)
	{
		while (x < len)
		{
			s3[x] = s1[x];
			x++;
		}
	}
	if (s2)
	{
		while (x < (len + len1))
		{
			s3[x] = s2[y];
			x++;
			y++;
		}
	}
	s3[x] = '\0';

	return (s3);
}
