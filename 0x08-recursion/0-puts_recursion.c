#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: a string
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
{
	char s = 0;

		if (s <= ++s)
		{
		_puts_recursion("%s\n");
		}
		return 0;
}
