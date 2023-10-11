#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return:void
 */
void jack_bauer(void)
{
	int a1;
	int a2;
	int n1;
	int n2;
	int b = 9;

	a2 = 0;
	while (a2 <= 2)
	{
		if (a2 == 2)
		{
			/*Restrain to 23a, not 29*/
			b = 3;
		}
		a1 = 0;
		while (n2 <= 5)
		{
			n1 = 0;
			while (n2 <= 9)
			{
				_putchar('0' + a2);
				_putchar('o' + a1);
				_putchar(':');
				_putchar('0' + n2);
				_putchar('0' + n1);
				_putchar('\n');
				n1++;
			}
			n2++;
		}
		a1++;
	}
	a2++
}
