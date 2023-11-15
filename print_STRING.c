#include "main.h"

/**
 * print_STRING - prints a string and unprintable characters
 * @str: string to print
 * Return: int, number of characters printed
 */

int print_STRING(char *str)
{
	int char_count, i;

	char_count = 0, i = 0;

	while (str[char_count])
	{
		if ((str[char_count] > 0 && str[char_count] < 32) ||
		(str[char_count] >= 127))

		{
			i += _putchar('\\');
			i += _putchar('x');

			if (str[char_count] < 16)
				i += _putchar('0');

			i += print_HEXA(str[char_count++]);
			continue;
		}

		i += _putchar(str[char_count++]);
	}

	return (i);
}
