#include "main.h"

/**
 *jack_bauer - prints every minute of the day of Jack Bauer
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int myhr;
	int mymin;

	for (myhr = 0; myhr < 24; myhr++)
	{
		for (mymin = 0; mymin < 60; mymin++)
		{
			_putchar((myhr / 10) + '0');
			_putchar((myhr % 10) + '0');
			_putchar(':');
			_putchar((mymin / 10) + '0');
			_putchar((mymin % 10) + '0');
			_putchar('\n');
		}
	}
}
