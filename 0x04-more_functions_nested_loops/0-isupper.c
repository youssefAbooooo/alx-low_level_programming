#include "main.h"

/**
 * _isupper - Entry point
 *
 * Description: _ilower  want to check if it is lowercase or not
 * @c: this a number
 *
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
        if (c >= 65 && c <= 90)
                return (1);
        else
                return (0);
}
