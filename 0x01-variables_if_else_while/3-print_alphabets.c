#include <stdio.h>

/**
 * main - printing alphabets in lowercase and uppercase
 *
 * Return: always (0)
 */
int main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
         int b;

	for (b = 0; b < 52; b++)
	{
		putchar(alp[b]);
	}
	putchar('\n');
	return (0);
}
