#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  * new_dog - makes a new dog
  * @name: name of the dog
  * @age: the age of the dog
  * @owner: the owner of the dog
  * Return: a pointer to the struct
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *ptr;

	ptr = malloc(sizeof(struct dog));
	if (ptr == NULL)
		return (NULL);

	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

	return (ptr);
}
