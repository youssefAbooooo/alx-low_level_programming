#include "main.h"

/**
 * _islower - Entry point
 *
 * Description: _ilower  want to check if it is lowercase or not
 * @c: this a number
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
