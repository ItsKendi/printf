#include "main.h"
#include <stdio.h>

/**
 * print_integer- prints number
 * @n: number to be printed
 *
 * Return: nothing.
 */
int print_integer(int n)
{
	unsigned int char_count, num;

	char_count = 0;

	if (n < 0)
	{
		num = n * -1;
		char_count += _putchar('-');
	}
	else
		num = n;

	if (num / 10)
		char_count += print_integer(num / 10);

	char_count += _putchar((num % 10) + '0');

	return (char_count);
}
