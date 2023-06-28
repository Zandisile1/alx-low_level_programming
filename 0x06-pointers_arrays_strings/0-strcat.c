#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @src: string pointer
 * @dest: destination of the string pointer
 *
 * Return: pointer to destination string
 */

char *_strcat(char *dest, char *src)
{
        int lengthStr, x;

        lengthStr = 0;
        while (dest[lengthStr] != '\0')
        {
        lengthStr++;
        }
        x = 0;
        while (src[x] != '\0')
        {
        dest[lengthStr] = src[x];
        lengthStr++;
        x++;
        } 
        dest[lengthStr] = '\0';
        return (dest);
}
