#include <stdio.h>

/**
 * main - prints numbers from 1-100 for multiples of three
 *	fizz is printed instead of the number, for multiples of five
 *	buzz for multiples both three and five, FIZZBUZZ
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FIZZBUZZ");

		else if ((num % 3) == 0)
			printf("Fizz");

		else if ((num % 5) == 0)
			printf("Buzz");

		else
			printf("%d", num);

		if (num == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
