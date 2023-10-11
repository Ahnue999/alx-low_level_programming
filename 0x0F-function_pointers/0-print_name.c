#include <stdio.h>
#include "function_pointers.h"

/**
  * print_name - a function that prints a name
  * @name: the name to print
  * @f: the function to use
  * Return: no return
  */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
