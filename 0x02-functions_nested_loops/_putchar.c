#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the C character to stdout
 * @c: The character to print
 *
 * Return: always (1) on succes
 * on error, -1 is returned
 */
int _putchar(char a)
{
	return (write(1, &a, 1));

}
