#include "main.h"
/**
 * _memset - memory filled with a value
 * @s: starting point
 * @b: desired value
 * @n: bytes to be changed
 *
 * Return: new value for n
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
