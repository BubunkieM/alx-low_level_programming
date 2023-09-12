#include "main.h"

/**
 * main - prints 10 times the alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	char d;
	int b;

	b = 0;

	while (b < 10)
	{
		d = 'a';
		while (d <= 'z')
		{
			putchar(d);
			d++
		}
		_putchar('\n');
		b++
	}
}
