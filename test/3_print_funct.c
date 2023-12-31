#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_char - prints a character
 * @args: va_list
 * Return: count of character printed
 */

int print_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}

/**
 * print_str - prints a string
 * @args: va_list
 * Return: count of character printed
 */
int print_str(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
		s = "(null)";

	return (print_string(s));
}

/**
 * print_string - print a string in reverse
 * @args: va_list
 * Return: count of character printed
 */

int print_string(va_list args)
{
	char *str;
	int char_count;

	str = va_arg(args, char *);
	char_count = 0;

	while (str[char_count])
		_putchar(str[char_count++]);

	return char_count;
}


/**
 * print_digit - prints an integer
 * @args: va_list
 * Return: count of characters printed
 */
int print_digit(va_list args)
{
	return (print_integer(va_arg(args, int)));
}

/**
 * print_ui_binary - prints an integer in binary
 * @args: va_list
 * Return: count of characters printed
 */

int print_ui_binary(va_list args)
{
	return (print_binary(va_arg(args, unsigned int)));
}
