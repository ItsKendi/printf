#include "main.h"
#include <stdio.h>

/**
 * print_octal - prints number
 * @num: number to be printed
 *
 * Return: void
 */

int print_octal(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	char_count = 0;
	if (num / 8)
		char_count += print_octal(num / 8);

	char_count += _putchar((num % 8) + '0');
	return print_octal(num);
}
