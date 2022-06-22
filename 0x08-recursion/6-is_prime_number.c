#include "main.h"
#include <stdio.h>

/**
 * prime - checks whether a number is prime or not prime
 * @x: number being tested
 * @y: number being tested
 * Return: the function prime
 */
int prime(int x, int y)
{
	if (x < 2)
		return (0);
	if (x / 2 < y)
		return (1);
	if (x % y == 0)
	{
		return (0);
	}
	return (prime(x, y + 1));
}
