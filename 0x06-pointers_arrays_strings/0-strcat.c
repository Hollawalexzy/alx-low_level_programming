#include "main.h"

/**
 * _strcat - A function that concatenates two strings
 * @dest: string to be appended to
 * @src: string to add
 * Return: Dest
 */

char *_strcat(char *dest, char *src)
{
		int i, j;

		i = 0;
		j = i0;

		while (dest[i] != '\0')
			i++;

		while (src[j] != '\0' && j < n)
		{
			dest[i] = src[j];
			j++;
		}
		dest[i] = '\0'

		return (dest);
}
