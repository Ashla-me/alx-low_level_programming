#include "main.h"
/**
 * char *_strncat(char *dest, char *src, int n) - concatenates two strings.
 * @src: String to append to dest
 * @dest: String to append src upon
 * n: number of bytes from src
 * Return:  pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
int index = 0, dest_len = 0;

while (dest[index++])
dest_len++;
for (index = 0; src[index] && index < n; index++)
dest[dest_len++] = src[index];

return (dest);
}
