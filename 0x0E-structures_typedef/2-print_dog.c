#include <stdio.h>
#include "dog.h"

/**
  * print_dog - print a dog structure
  * @d: a pointer to a structure
  * Return: no return
  */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (!(d->owner))
			printf("Name: (nil)\n");
		else
			printf("Onwer: %s\n", d->owner);
	}
}
