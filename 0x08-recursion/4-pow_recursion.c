#include "main.h"
/**
 * _pow_recursion -  returns the value of x raised to the power of y
 * @x: input 1
 * @y: input 2
 * Return: y if lower than 0 or -1
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);

else if (y == 0)
return (1);

else
return (x * _pow_recursion(x, (y - 1)));
return (0);
}
