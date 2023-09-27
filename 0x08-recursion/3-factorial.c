#include "main.h"

/**
 * factorial - factorial of a number returned
 * @n: factorial number returned from
 * Return: n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
