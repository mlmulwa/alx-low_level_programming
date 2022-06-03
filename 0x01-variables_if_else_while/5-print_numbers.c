#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	int mynum;

	for (mynum = 0; mynum < 10; mynum++)
	{
		printf("%d", mynum);
	}
	putchar('\n');
	return (0);
}
