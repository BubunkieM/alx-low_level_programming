#include "main.h"
/**
 * print_sign -  printing the sign of a number
 *
 * @n: int to be checked
 *
 * Return: (1)
 *
 * otherwise (0)
 *
 * (-1) if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('_');
	}
	return (-1);
}
