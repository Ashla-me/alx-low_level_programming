#include "main.h"
/**
 * print_last_digit - return last digit
 * @n : number to check
 * Return:0 or 1
 */
int print_last_digit(int n)
{
	int na;

	if (n < 0)
		na = -1 * (n % 10);
	else
		na = n % 10;
	_putchar(na + '0');
	return (na);
}
