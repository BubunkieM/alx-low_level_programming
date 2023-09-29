#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory stored
 * @src: copied memory
 * @n: number of bytes
 *
 * Return: changed n byte and copied memory
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
