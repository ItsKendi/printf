#include "main.h"

/**
* print_wide_str - prints a string and non-printable characters
* @args: va_list
*
* Return: count of characters printed
*/
int print_wide_str(va_list args)
{
	return (print_STRING(va_arg(args, char *)));
}

/**
* print_percentage - prints the percent character
* @args: va_list
*
* Return: count for characters printed
*/
int print_percentage(va_list args)
{
	(void) args;
	return (_putchar('%'));
}
