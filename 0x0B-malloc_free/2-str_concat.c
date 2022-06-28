#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string to be concantenated
 * @s2: second string to be concatenated
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, size;
	char *a;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	size = i + j + 1;
	a = malloc(sizeof(char) * size);
	if (a == 0)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		*(a + i) = *(s1 + i);
		return (a);
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		*(a + i + j) = *(s2 + j);
	}
	return (a);
}
