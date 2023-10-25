#include "main.h"
/**
 * _strlen_recursion -  returns the length of a string
 * @s: part of the function
 * @n: length of the string
 * Return: Always 0 (Success)
 */

int _strlen_recursion(char *s)

{
	
	int n = 0;

	if (*s)
	{
	n++;
	n +=  _strlen_recursion(s + 1);
	}
	return (n);
}
