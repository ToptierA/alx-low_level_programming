#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - A function that frees dogs
 * @d: A pointer to a struct dog
 * Return: This function does not return anything
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
