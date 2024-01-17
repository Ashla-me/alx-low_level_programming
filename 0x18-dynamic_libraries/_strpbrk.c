#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: first occurrence input
 * @accept: second occurrence input
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int n;

	while (*s)
	{
		for (n = 0; accept[n]; n++)
		{
		if (*s == accept[n])
		return (s);
		}
	s++;
	}
	return ('\0');
}
