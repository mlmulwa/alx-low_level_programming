#include "main.h"

/**
 * *_strncat -concatenates two strings
 * @dest: destination
 * @src: source
 *@n: number of bytes
 * Return: pointer to the destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
		;
	for (j = 0; dest[j] < n; j++)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
