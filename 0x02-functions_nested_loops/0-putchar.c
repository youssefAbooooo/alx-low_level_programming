#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Descreption: prints _putchar using putchar prototype
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0 ; i < 8 ; i++)
		_putchar(str[i]);
	_putchar('\n');
	return (0);

}
