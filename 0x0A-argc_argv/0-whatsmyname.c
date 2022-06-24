#include "main.h"
#include <stdio.h>

/**
 * main - Prints the program's name, followed by a newline
 * @argc: count of arguments
 * @argv: array of pointers to the strings passed
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
