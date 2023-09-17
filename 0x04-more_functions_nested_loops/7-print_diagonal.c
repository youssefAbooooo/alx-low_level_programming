#include "main.h"

/**
 * print_diagonal - Entry point
 *
 * Description: _ilower  want to check if it is lowercase or not
 * @n: this a number
 *
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, count;

		count = 0;

		for (i = 0; i < n; i++)
		{
			for (int j = 0; j < count; j++)
			{
				putchar(' ');
			}
			count++;
			putchar('\\');
			if (i < n - 1)
				putchar('\n');
		}
	}
	else
		putchar('\n');
}
