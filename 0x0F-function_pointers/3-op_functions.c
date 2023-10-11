#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
  * op_add - a function the add two integers
  * @a: the first integer
  * @b: the second integer
  * Return: the sum
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - a function the substracts two integers
  * @a: the first integer
  * @b: the second integer
  * Return: the reminder
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - a function the multiplies two integers
  * @a: the first integer
  * @b: the second integer
  * Return: the product
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - a function the divides two integers
  * @a: the first integer
  * @b: the second integer
  * Return: the quotient
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
  * op_mod - a function the mods two integers
  * @a: the first integer
  * @b: the second integer
  * Return: the modulus
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
