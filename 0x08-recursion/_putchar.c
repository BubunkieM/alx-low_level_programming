#include "main.h"
#include <unistd.h>
/**
 * _putchar - character c to stdout
 * @c: printed character
 *
 * Return: 1
 * on error, -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
