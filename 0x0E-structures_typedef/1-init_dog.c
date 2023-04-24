#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initializes a dog struct
 * @d: A pointer to a struct dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the dog's owner
 * Return: This function does not return anything
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	if (name != NULL)
		d->name = name;

	d->age = age;

	if (owner != NULL)
		d->owner = owner;
}
