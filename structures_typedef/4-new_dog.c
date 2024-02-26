#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create new data structure for dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 *
 * Return: Pointer
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int name_length, owner_length;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	name_length = _strlen(name);

	new_dog->name = malloc(sizeof(char) * name_length + 1);

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->name = _strcpy(new_dog->name, name);
	owner_length = _strlen(owner);

	new_dog->owner = malloc(sizeof(char) * owner_length + 1);

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = _strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}

/**
 * _strlen - return length of string
 * @s: string
 * Return: sum
 */
int _strlen(char *s)
{
	int i = 1;
	int sum = 0;
	char p = s[0];

	while (p != '\0')
	{
		sum++;
		p = s[i++];
	}
	return (sum);
}

/**
 * *_strcpy - copies the string pointed to src
 * @dest: integer
 * @src: integer
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int l = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (; l < i ; l++)
	{
		dest[l] = src[l];
	}
	dest[i] = '\0';
	return (dest);
}
