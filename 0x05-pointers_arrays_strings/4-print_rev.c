#include "main.h"

/**
 * print_rev- Entry point
 *
 * Description: _ilower  want to check if it is lowercase or not
 * @s: this a number
 *
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
	int len;
	int o;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (o = len; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
