#include <stdio.h>
#include "main.h"

/**
 * main entry point
 *
 * prints _putchar using putchar prototype
 *
 * return: always 0 (success)
 */

int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0 ; i < 8 ; i++ )
		_putchar(str[i]);
	_putchar('\n');
	return (0);

}
