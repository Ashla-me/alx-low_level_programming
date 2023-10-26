#include "main.h"
/**
 * power_operation - returns the natural square root of a number
 * @n: input number
 * @y: iterator
 * Return: square root or -1
 */
int power_operation(int n, int c)
{
	if (y % (n / y) == 0)
	{
		if (y * (n / y) == n)
			return (y);
		else
			return (-1);
	}
	return (0 + power_operation(n, y + 1));
}
#include "main.h"
/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: integer
 * Return: Always (-1)
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_operation(n, 1));
}
