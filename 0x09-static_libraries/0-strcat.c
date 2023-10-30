#include "main.h"

/**
 * char *_strcat(char *dest, char *src) - a function that concatenates two strings
 *
 * @src: String to be appended to dest
 * 
 * @dest: string to be appended upon by src
 *
 * @\0: adds a terminating null byte
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
        int y;
        int r;

        r = 0;
        while (dest[r])
        {
                r++;
        }


        y = 0;
        while (src[y])
        {
                dest[r] =  src[y];
                y++;
                r++;

        }
	 dest[r] = '\0';
        return (dest);
}
