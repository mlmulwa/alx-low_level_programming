#include "main.h"
#include <stdio.h>
#include <stdbool.h>

/**
 * wildcmp - compares two strings
 * @*s1 - first string
 * @*s2 - second string
 * Return: Always 0 (Success)
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (true);
	if (*s1 == '*')
	{
		while (*(first + 1) == '*')
			s1++;
	}
	if (*s1 == '*' && *(s1 + 1) != '\0' && *s2 == '\0')
		return (false);
	if (*s1 == '?' || *s1 == *s2)
		return (match(s1 + 1, s2 + 1));
	if (*s1 == '*')
		return (match(s1 + 1, s2) || match(s1, s2 + 1));
	return (false);
}

void test(char *s1, char *s2)
{
	wildcmp(s1, s2) ? puts("Yes") : puts("No");
}
