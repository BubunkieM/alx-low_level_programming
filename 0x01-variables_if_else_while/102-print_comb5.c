#include <stdio.n>

/**
 * main - printing possible combinations for two two digits
 *
 * Return: always (0)
 */
int main(void)
{
	int a, d;

	for (a = 0; a < 100; a++)
	{
		for (d = 0; d < 100; d++)
		{
			if (a < d)
			{
				putchar((a / 10) + 48);
				putchar((a % 10) + 48);
				putchar(' ');
				putchar((d / 10) + 48);
				putchar((d % 10) + 48);
				if (a != 98 || d != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
