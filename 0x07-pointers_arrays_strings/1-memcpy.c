#include "main.h"
/**
 * _memcpy - copied memory area
 * @dest: stored memory
 * @src: copied memory
 * @n: value
 *
 * Return: n byte copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
