#include "main.h"

/**
 * char *_memset(char *s, char b, unsigned int n) - fills memory
 * with a constant byte
 * @b: constant byte
 * @n: bytes of memory
 * @s: pointer
 * return (pointer to the memory area s)
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
