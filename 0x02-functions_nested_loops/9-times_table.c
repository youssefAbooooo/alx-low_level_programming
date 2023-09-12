#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int k;

			k = i * j;
			if (j == 0)
			{
				if (i == 0)
					_putchar('0');
				else
				{
					_putchar('\n');
					_putchar('0');
				}
			}
			else
			{
				if (k <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(k % 10 + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(k / 10 + '0');
					_putchar(k % 10 + '0');
				}
			}
		}
	}
}
