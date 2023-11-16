#include "main.h"
#include <stdio.h>

/**
 * print_uint - prints number
 * @num: number to be printed
 *
 * Return: nothing
 */

int print_uint(unsigned int num)
{
	unsigned int char_count;

	char_count = 0;

	if (num / 10)
		char_count += print_uint(num / 10);

	char_count += _putchar((num % 10) + '0');
	return (char_count);
}
