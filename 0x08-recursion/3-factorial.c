#include "main.h"
/**
 * int factorial -  returns the factorial of a given number
 * @n: integer
 * Return: Always (-1)
 */

int factorial(int n)
{
	if (n < 0)
	return (-1);
	if (n == 0)
	return (1);
	return (n * factorial(n - 1));
}
