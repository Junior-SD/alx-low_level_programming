#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - will concantenate two strings
 * @s1: The 1st string
 * @s2: The 2nd string
 * @n: The limit of s2
 *
 * Return: Pointer to the nw space in memory, otherwise NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int x;
	unsigned int y;
	char *strCpy;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = 0;
	while (s1[x] != '\0')
		x++;
	strCpy = malloc(sizeof(char) * (x + n + 1));
	if (strCpy == NULL)
		return (NULL);

	x = y = 0;
	while (s1[x] != '\0')
	{
		strCpy[x] = s1[x];
		x++;
	}
	while (y < n && s2[y] != '\0')
	{
		strCpy[x] = s2[y];
		x++, y++;
	}
	strCpy[x] = '\0';
	return (strCpy);
}
