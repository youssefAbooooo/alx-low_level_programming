#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Description: _ilower  want to check if it is lowercase or not
 *
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
