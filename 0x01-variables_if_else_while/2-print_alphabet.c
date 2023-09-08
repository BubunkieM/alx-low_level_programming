#include <stdio.h>

/**
 * main - printing the alphabet in lowercase
 *
 * Return: always (0)
 */
int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int b;

	for (b = 0; b < 26; b++)
	{
		putchar(alph[b]);
	}
	putchar('\n');
	return (0);
}
