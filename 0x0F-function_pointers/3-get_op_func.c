#include "3-calc.h"
#include <string.h>
#include <stdlib.h>

/**
 * get_op_func -  selects the correct function to perform the operation
 * @s: string
 *
 * Return: 0 if sucessful
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int x = 0;

	while (x < 5)
	{
		if (strcmp(s, ops[x].op) == 0)
			return (ops[x].f);
		x++;
	}
	return (0);
}
