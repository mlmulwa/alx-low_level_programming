#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	char myletters;

	for (myletters = 'z'; myletters >= 'a'; myletters--)
	{
		putchar(myletters);
	}
	putchar('\n');
	return (0);
}
