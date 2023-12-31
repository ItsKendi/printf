#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printf - Print a formatted string
 * @format: format string to use
 * @...: argument list
 * Return: int
 */
int _printf(const char *format, ...)
{
	va_list args;
	int in_specifier, char_count;

	if (format == NULL)
		exit(1);

	in_specifier = 0, char_count = 0;
	va_start(args, format);

	while (*format)
	{
		if (!in_specifier && (*format) != '%')
		{
			char_count += _putchar(*format++);
			continue;
		}
		else
			if (*format == '%')
			{
				if (in_specifier)
				{
					char_count += _putchar(*format);
					format++;
					in_specifier = 0;
				}
				else
				{
					in_specifier = 1;
					format++;
				}

				continue;
			}

		char_count += print_parameters(*format, args);
		format++;
		in_specifier = 0;
	}

	va_end(args);
	return (char_count);
}
