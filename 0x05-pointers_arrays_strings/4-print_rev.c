#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
int length = 0;
int y;

while (*s != '\0')
{
length++;
s++;
}
s--;
for (y = length; y > 0; y--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
