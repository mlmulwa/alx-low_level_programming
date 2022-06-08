#include "main.h"

/**
 * _isalpha - check the code for letters whether lower case or upper case
 * @c: letter being tested
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
