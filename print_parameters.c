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
	int char_count, i;
	type_id identity[] =
	{
		{"b", print_ui_binary},
		{"u", print_unsigned},
		{"o", print_octal},
		{"x", print_hexa},
		{"X", print_Hexa},
		{"p", print_pointer},
		{"R", print_rot},
		{"%", print_percent},
		{"c", print_char},
		{"s", print_str},
		{"S", print_wide_str},
		{"r", print_string},
		{"d", print_digit},
		{"i", print_digit},
		{"b", print_ui_binary},

		{NULL, NULL}
	};

	i = 0, char_count = 0;

	while (identity[i].s)
	{
		if (*identity[i].s == c)
			char_count = identity[i].print(args);

		i++;
	}

	return (char_count);
}


