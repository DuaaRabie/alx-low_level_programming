#include "3-calc.h"

/**
 * get_op_func - a function that selects the correct operation function
 * @s: address of the operator symbol
 * Return: a function pointer to the correct operation
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < 5)
	{
		if (s[0] == ops[i].op[0])
			return (ops[i].f);
		i++;
	}
	return (ops[5].f);
}
