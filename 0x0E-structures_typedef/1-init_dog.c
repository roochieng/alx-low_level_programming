#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - initialize struct dog
 * @d: pointer to the dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner name
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *dogg;

	dogg = malloc(sizeof(struct dog));
	if (dogg == NULL)
		return (NULL);
	dogg->name = name;
	dogg->age = age;
	dogg->owner = owner;
	return (dogg);
}
