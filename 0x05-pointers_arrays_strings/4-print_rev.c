#include "main.h"

/**
 * print_rev- Entry point
 *
 * Description: _ilower  want to check if it is lowercase or not
 * @: this a number
 *
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
	int len;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	while (len)
	{
		_putchar(*(s + len - 1));
		len--;
	}
	_putchar('\n');
}
