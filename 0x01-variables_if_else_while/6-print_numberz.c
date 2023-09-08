#include <stdio.h>

/**
 * main - printing numbers from 0 to 9
 *
 * Return: always (0)
 */
int main(void)
{
	int b;

	for (b = 48; b < 58; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
