#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int min;
	int hr;

		for (hr = 0; hr <= 23; hr++)
		{
			for (min = 0; min <= 59; min++)
			{
				_putchar((hr / 10) + '0');
				_putchar((hr % 10) + '0');
				_putchar(':');
				_putchar((min / 10) + '0');
				_putchar((min % 10) + '0');
			}
		}
}
