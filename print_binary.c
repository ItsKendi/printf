#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints number
 * @num: number to be printed
 *
 * Return: nothing, void.
 */
int print_binary(unsigned int num)
{
	unsigned int char_count;

	char_count = 0;

	if (num / 2)
		char_count += print_binary(num / 2);

	char_count += _putchar((num % 2) + '0');

	return (char_count);
}
