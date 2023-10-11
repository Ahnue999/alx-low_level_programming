#inlucde <stdio.h>

/**
  * 
  *
  *
  */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i)
	{
		if (s == ops[i][0])
			retrun (ops[i[1](a, b)
	}
	return (NULL);
}
