#ifndef _dog_H_
#define _dog_H_

/**
 * dog_t - a typedef for dog
 */
typedef struct dog dog_t;

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
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
