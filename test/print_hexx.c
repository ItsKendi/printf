#include "main.h"
#include <stdio.h>

/**
 * print_hexx - prints number
 * @num: number to be printed
 *
 * Return: void
 */

int print_hexx(unsigned int num)
{
	unsigned int char_count;

	char_count = 0;

	if (num / 16)
		char_count += print_hexx(num / 16);

	if ((num % 16) > 9)
		char_count += _putchar((num % 16) + 87);
	else
		char_count += _putchar((num % 16) + '0');

	return (char_count);
}
