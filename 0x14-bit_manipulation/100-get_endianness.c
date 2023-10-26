#include "main.h"

/**
  * get_endianness - tells the endianness of an architecture.
  *
  * Return: nothing.
  */
int get_endianness(void)
{
	unsigned int x = 0x76543210;
	char *c = (char *)&x;

	if (*c == 10)
		return (1);
	else
		return (0);
}
