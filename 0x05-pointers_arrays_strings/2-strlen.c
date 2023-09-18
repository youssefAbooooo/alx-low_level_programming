#include "main.h"

/**
 * _strlen - Entry point
 *
 * Description: _ilower  want to check if it is lowercase or not
 * @s: this a number
 *
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
