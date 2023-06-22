#include "main.h"
/**
 * jack_bauer - prints every minute of the
 * dayof Jack Bauer, starting from
 * 00:00 to 23:59
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
				_putchar('\n');
			}
		}
}
