#include "main.h"

/**
 * jack_bauer  print every minute of everyday of Jack Bauer
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
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
