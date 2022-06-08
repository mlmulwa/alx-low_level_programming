#include <unistd.h>                                                                                                             
#include "main.h"

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char mycase;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (mycase = 'a'; mycase <= 'z'; mycase++)
		{
			_putchar(mycase);
		}
	}
	_putchar('\n');
	return (0);
}
