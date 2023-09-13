#include "main.h"
/**
 * print_last_digit - printing last digit of a number
 *
 * @n: int extracting from the last digit
 *
 * Return: last digit value
 *
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
