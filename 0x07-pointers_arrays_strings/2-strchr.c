#include "main.h"

/**
 * _strchr - locates a character in a string
 * @c: first occurrence of the character
 * @s: second character
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int n = 0;

	for (; s[n] >= '\0'; n++)
	{
		if (s[n] == c)
			return (&s[n]);
	}
	return (0);
}
