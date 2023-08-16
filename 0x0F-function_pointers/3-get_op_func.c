#include "3-calc.h"
	#include <stdlib.h>
	/**
	 * get_op_func - Function for selecting operation .
	 * @s: Selector.
	 *
	 * Return: directs to the selected function .
	 */
	int (*get_op_func(char *s))(int, int)
	{
		op_t ops[] = {
			{"+", op_add},
			{"-", op_sub},
			{"*", op_mul},
			{"/", op_div},
			{"%", op_mod},
			{NULL, NULL},
		};


		int k = 0;


		while (ops[k].op != NULL && *(ops[k].op) != *s)
			k++;


		return (ops[k].f);
	}

