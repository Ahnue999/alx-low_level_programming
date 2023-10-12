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

	if (separator == NULL)
		separator = "";

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		char *s = va_arg(ap, char*);
		if (s != NULL)
		{
			if (i < n - 1)
				printf("%s%s", s, separator);
			else
				printf("%s\n", s);
		}
		else
		{
			if (i < n - 1)
				printf("%s%s", "(nil)", separator);
			else
				printf("%s\n", "(nil)");
		}
	}
}

