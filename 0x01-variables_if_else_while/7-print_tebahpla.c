#include <stdio.h>

/**
 * main - printing lowercase alphabet in reverse
 *
 * Return: always (0)
 */
int main(void)
{
	char b;

	for (b = 'z'; b >= 'a'; b--)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
