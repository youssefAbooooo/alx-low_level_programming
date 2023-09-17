#include "main.h"

/**
 * print_most_numbers - Entry point
 *
 * Description: _ilower  want to check if it is lowercase or not
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' || i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
