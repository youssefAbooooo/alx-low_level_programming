#include "main.h"

/**
 * _puts- Entry point
 *
 * Description: _ilower  want to check if it is lowercase or not
 * @str: this a string
 *
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
