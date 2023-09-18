#include "main.h"

/**
  * swap_int - swap two intergers
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
