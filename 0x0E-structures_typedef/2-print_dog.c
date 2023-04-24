#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Initializes a dog struct
 * @d: A pointer to a struct dog
 * Return: This function does not return anything
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
}
