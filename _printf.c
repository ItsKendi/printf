#include <stdarg.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _printf - Print a formatted string
 * @format: format string to use
 * @...: argument list
 * Return: int
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int is_specifier, count;

	if (format == NULL)
		exit(1);

	is_specifier = 0, count = 0;
	va_start(ap, format);

	while (*format)
	{
		if (!is_specifier && (*format) != '%')
		{
			count += _putchar(*format++);
			continue;
		}
		else if (*format == '%')
		{
			if (is_specifier)
			{
				count += _putchar(*format);
				format++;
				is_specifier = 0;
			}
			else
			{
				is_specifier = 1;
				format++;
			}
			continue;
		}

		count += print_parameters(*format, ap);
		format++;
		is_specifier = 0;
	}

	va_end(ap);
	return (count);
}
