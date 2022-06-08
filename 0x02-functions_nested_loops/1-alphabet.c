#include "main.h"

/**
 *print_alphabet - Prints the alphabet in lowercase
 *Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char mycase;

	for (mycase = 'a'; mycase <= 'z'; mycase++)
	{
		_putchar(mycase);
	}
	_putchar('\n');
}

