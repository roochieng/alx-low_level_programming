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
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
