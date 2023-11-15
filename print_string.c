#include <stddef.h>
#include "main.h"
/**
 * print_string - prints a string
 * @str: string to print
 *
 * Return: int, number of characters printed
 */
int print_string(char *str)
{
	int char_count = 0;

	if (str == NULL)
	{
		str = "(null)";

		while (str[char_count])
			_putchar(str[char_count++]);
	}
	else
	{
		while (str[char_count])
			_putchar(str[char_count++]);
	}

	return (char_count);
}

