#include "main.h"

/**
 * positive_or_negative - checks whether is positive or negative
 * @i: is the number to be tested
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive", i);
	else if (i < 0)
		printf("%d is negative", i);
	else if (i == 0)
		printf("%d is zero", i);
	else
		return (0);
