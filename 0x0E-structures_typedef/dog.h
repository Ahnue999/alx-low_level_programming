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

/* dog_t - a typedef for dog */
typedef struct dog dog_t

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
