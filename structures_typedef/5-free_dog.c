#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free that dog
 * @d: elements
 * Return: 0
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
