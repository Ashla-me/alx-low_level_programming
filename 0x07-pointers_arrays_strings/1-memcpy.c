#include "main.h"
/**
 * _memcpy - copies memory area
 * @n: number of memory
 * @src: first memory area
 * @dest: Second memory area
 * Return: (copied memory with n changed bytes)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int m = 0;
	int i = n;

	for (; m < i; m++)
	{
		dest[m] = src[m];
		n--;
	}
	return (dest);
}
