#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @str: string to print
 *
 * Return: int, number of characters printed
 */
int print_rev(char *str)
{
	int char_count, rev;

	char_count = 0, rev = 0;

	while (str[rev])
		rev++;

	char_count = rev;

	rev--;

	while (rev >= 0)
	{
		_putchar(str[rev]);
		rev--;
	}

	return (char_count);
}
