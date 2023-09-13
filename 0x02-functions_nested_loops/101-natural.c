#include <stdio.h>

/**
 * main - all the sum of multiples printed
 * of 3 of 5 below 1024
 * Return: always (0)
 */
int main(void)
{
	unsigned long int sum3, sum5, sum;
	int a;

	sum3 = 0;
	sum5 = 0;
	sum = 0;

	for (a = 0; a < 1024; ++a)
	{
		if ((a % 3) == 0)
		{
			sum3 = sum3 + a;
		} else if ((a % 5) == 0)
		{
			sum5 = sum5 + a;
		}
	}
	sum = sum3 + sum5;
	printf("%lu\n", sum);
	return (0);
}
