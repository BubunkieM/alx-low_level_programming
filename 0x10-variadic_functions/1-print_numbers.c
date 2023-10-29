#include "variadic_functions"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: variable number of numbers to be printed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;

	unsigned int i, arr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		arr = va_arg(ptr, const unsigned int);
		printf("%d", arr);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
