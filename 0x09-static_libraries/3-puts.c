#include "main.h"
/**
 * _puts - printed string, followed by a new line to stdout
 * @str: printed string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
