#include <stdio.h>

/**
 * main - Entry
 *
 * Description: prints all the lowercase alphabet in reverse form
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
