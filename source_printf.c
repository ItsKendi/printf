#include "main.h"
#include <stdio.h>

/**
 * print_parameters - prints parameters
 * @c: string identifier
 * @args: list of va parameters
 * Return: number of all characters printed
 */
int print_parameters(char c, va_list args)
{
	int char_count = 0;

	if (c == 'c')
	{
		char_count = print_char(args);
	}
	else
		if (c == 's')
		{
			char_count = print_str(args);
		}
		else
			if (c == '%')
			{
				char_count = print_percent(args);
			}
			else
			{
				char_count = handle_other_cases(c, args);
			}

	return (char_count);
}
