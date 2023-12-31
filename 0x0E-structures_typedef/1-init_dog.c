#include "dog.h"

/**
  * init_dog - initialize a variable of type dog
  * @d: the structure
  * @name: name of the dog
  * @age: the age of the dog
  * @owner: the owner of the dog
  * Return: no return
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
