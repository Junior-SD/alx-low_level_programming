#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - will create a new dog
 * @name: Name of the dog
 * @age: age of the dog
 * @owner: owner of the dog.
 *
 * Return: pointer to new dog, otherwis NULL.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dg1;
	int nameLen, ownerLen, x;

	dg1 = (dog_t *)malloc(sizeof(dog_t));
	if (dg1 == NULL)
		return (NULL);

	nameLen = ownerLen = 0;
	while
		(name[nameLen++])
	while
		(owner[ownerLen++]);
	dg1->name = malloc(nameLen * sizeof(dg1->name));
	if (dg1->name == NULL)
	{
		free(dg1);
		return (NULL);
	}
	for (x = 0; x <= nameLen; x++)
		dg1->name[x] = name[x];
	dg1->age = age;
	dg1->owner = malloc(ownerLen * sizeof(dg1->owner));
	if (dg1->owner == NULL)
	{
		free(dg1->name);
		free(dg1);
		return (NULL);
	}
	for (x = 0; x <= ownerLen; x++)
		dg1->owner[x] = owner[x];
	return (dg1);
}
