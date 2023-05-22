#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog -  a function that prints a struct dog
 * @d: dog to print
 */
void print_dog(struct dog *d)
{
	if (d == 0)
	{
		return;
	}
	else
	{

	(d->name == NULL)
		printf("Name: (nil)\n");
		else
		printf("Name: %s\n", d->name);
		printf("Age: %d\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
	}
}
