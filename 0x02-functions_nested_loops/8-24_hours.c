#include "main.h"
/**
 * jack_bauer - jack bauer (24 hrs)
 * Return: void
 */
void jack_bauer(void)
{
	int hr, sec;

	for (hr = 0; hr < 24; hr++)
	{
		for (sec = 0; sec < 60; sec++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((sec / 10) + '0');
			_putchar((sec % 10) + '0');
			_putchar('\n');
		}
	}
}
