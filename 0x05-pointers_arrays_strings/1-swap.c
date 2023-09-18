#include "main.h"

/**
  * reset_to_98 - yes
  * @a: the number to swap
  * @b: the number to swap
  * Return: void
  */
void swap_int(int *a, int *b)
{
	int temp;
	temp = *b;
	*b = *a;
	*a = temp;
}
