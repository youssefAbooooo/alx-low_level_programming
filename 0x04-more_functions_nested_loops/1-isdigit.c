#include "main.h"

/**
 * _isdigit - Entry point
 *
 * Description: _ilower  want to check if it is lowercase or not
 * @c: this a number
 *
 * Return: Always 0 (Success)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
