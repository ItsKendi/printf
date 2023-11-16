#include "main.h"
#include <stdio.h>

/**
 * print_HEXA - prints unsigned number in hex
 * @num: number to be printed
 *
 * Return: void
 */

int print_HEXA(unsigned int num)
{
	unsigned int char_count;

	char_count = 0;

	if (num / 16)
		char_count += print_HEXA(num / 16);

	if ((num % 16) > 9)
		char_count += _putchar((num % 16) + 55);
	else
		char_count += _putchar((num % 16) + '0');

	return (char_count);
}
