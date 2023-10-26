#include "main.h"

/**
  * get_endianness - tells the endianness of an architecture.
  *
  * Return: nothing.
  */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *)&x;

	return ((int) *c);
}
