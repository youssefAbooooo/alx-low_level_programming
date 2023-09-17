#include "main.h"

/**
 * print_line - Entry point
 *
 * Description: _ilower  want to check if it is lowercase or not
 * @n: this a number
 *
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
			_putchar('_');
		_putchar('\n');
	}
	else
		_putchar('\n');
}
