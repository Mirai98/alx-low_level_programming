#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - add 2 int
 * @a: The first int
 * @b: The second int
 *
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - sub 2 n
 * @a: The first n
 * @b: The second n
 *
 * Return: The difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - mul  two numbers
 * @a: The first n
 * @b: The second n
 *
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - the division of two numbers
 * @a: The first n
 * @b: The second n
 *
 * Return: The quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - the remainder of the division of two numbers
 * @a: The first n
 * @b: The second n
 *
 * Return: The remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
