#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *a = "oleh";
    unsigned int n;

    n = _strspn(s, a);
    printf("%u\n", n);
    return (0);
}
