#include "main.h"

/**
 * _islower - checking for lowercase alphabet
 * @c: Character to be checked
 * Return: (1), otherwise (0)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
