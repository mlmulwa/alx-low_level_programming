#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	char mycase;


	for (mycase = 'a'; mycase <= 'z'; mycase++)
	{
		putchar(mycase);
	}
	for (mycase = 'A'; mycase <= 'Z'; mycase++)
	{
		putchar(mycase);
	}
	putchar('\n');
	return (0);
}
