#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int longo = 0;
	int a;

	while (*s != '\0')
	{
		longo++;
		s++;
	}
	s--;
	for (a = longo; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
