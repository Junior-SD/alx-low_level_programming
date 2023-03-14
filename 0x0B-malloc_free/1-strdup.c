#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - Returns a pointer to a new string which is a duplicate
 * of the string str
 * @str: The string to duplicate
 *
 * Return: The pointer to the copied string otherwise, NULL.
 */

char *_strdup(char *str)
{
	char *dp;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;
	dp = malloc(sizeof(char) * (len + 1));

	if (dp == NULL)
		return (NULL);

	while ((dp[i] = str[i]) != '\0')
		i++;

	return (dp);
}
