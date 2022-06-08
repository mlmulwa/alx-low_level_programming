#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 -  prints the alphabet x10
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char mycase;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (mycase = 'a'; mycase <= 'z'; mycase++)
		{
			_putchar(mycase);
		}
		_putchar('\n');
	}
}
