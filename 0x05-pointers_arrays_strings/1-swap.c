#include "main.h"

/**
 * swap_int - Entry point
 *
 * Description: _ilower  want to check if it is lowercase or not
 * @a: this a number
 * @b: this is a number
 *
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
