#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog details
 * @name: 1st data point
 * @age: 2nd data point
 * @owner: 3rd data point
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - a typedef for STRUCT DOG
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
