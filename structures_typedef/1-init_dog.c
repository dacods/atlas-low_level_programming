#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - initialize a variable type
 * @d: the dog
 * @name: the dogs name
 * @age: the dogs age
 * @owner: the dogs owner
 * Return: struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		NULL;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
