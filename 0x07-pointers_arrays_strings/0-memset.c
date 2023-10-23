#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @b: constant byte
 * @n: bytes of memory
 * @s: pointer
 * Return: (pointer to the memory area s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	int m = 0;

	for (; n > 0; m++)
	{
		s[m] = b;
		n--;
	}
	return (s);
}
