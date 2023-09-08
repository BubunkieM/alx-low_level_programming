#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - printing the alphabets without q and e
 *
 * Return: always (0)
 */
int main(void)
{
	int b;

	for (b = 97; b < 123; b++)
	{
		if (b != 101 && b != 113)
		{
			putchar(b);
		}
	}
	putchar('\n');
	return (0);
}
