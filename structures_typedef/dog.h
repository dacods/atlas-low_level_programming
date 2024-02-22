#ifndef dog_h
#define dog_h

/**
 * struct dog - new struct
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 * Return: dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
