#include "main.h"

/**
 * print_alphabet_x10 - make alphabet x10 times
 * Return - void
 */

void print_alphabet_x10(void)
{
	char ash;

	int king = 0;

	while (king < 10)
	{
		ash = 'a';
		while (ash <= 'z')
		{
			_putchar(ash);
			ash++;
		}
		_putchar('\n');
		king++;
	}
}
