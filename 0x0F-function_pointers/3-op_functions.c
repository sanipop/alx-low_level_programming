#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: Result of addition
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - fxn for doing subtraction
 * @a:  var 1.
 * @b:  var 2.
 *
 * Return: Result.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - fxn to multiply 2 nums.
 * @a:  var 1.
 * @b: .var 2
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - func to div.
 * @a: var 1.
 * @b: var2.
 *
 * Return: Results for the division
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - func to div.
 * @a: var 1.
 * @b:  var 1.
 *
 * Return: Results for the division.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
