#include <stdlib.h>
#include "main.h"

/**
 * *create_array - will create an array of chars and intitializes
 * with a specfic char
 * @size: The size of the array
 * @c: Char to initialize the array
 *
 * Return: The pointer to the array, for a successful prog run and
 * NULL as Error
 */

char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	x = (char *) malloc(sizeof(char) * size);

	if (x == NULL)
		return (0);

	while (i < size)
	{
		*(x + i) = c;
		i++;
	}
	*(x + i) = '\0';

	return (x);
}
