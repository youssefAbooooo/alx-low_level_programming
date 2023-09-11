#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last digit of the number.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int s = n % 10 ;
	if (s > 5)
		printf("Last digit of %d is %d and is greater than 5", n , s);
	else if (s == 0)
		printf("Last digit of %d is %d and is 0", n , s);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0", n , s);
	return (0);
}
