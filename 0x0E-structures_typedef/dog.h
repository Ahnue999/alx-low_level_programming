#ifndef _dog_H_
#define _dog_H_

/**
  * struct dog - dog structure
  * @name: first member
  * @age: second member
  * @owner: third member
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
