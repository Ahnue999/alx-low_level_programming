#include "variadic_functions.h"

/**
 * print_strings - prints string.
 * @n: the first argument.
 * @separator: the separtaor.
 *
 * Return : No return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *s;

	if (separator == NULL)
		separator = "";

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char*);
		if (s)
		{
			printf("%s", s);
		}
		else
		{
			printf("(nil)");
		}
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}

