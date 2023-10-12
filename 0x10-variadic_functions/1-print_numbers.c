#include "variadic_functions.h"

/**
  * print_numbers - sum all its arguments.
  * @n: the first argument.
  *
  * Return : the sum.
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list ap;

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);


	return (sum);
}
