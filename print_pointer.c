#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * print_pointer - prints pointer
 * @num: number to be printed
 *
 * Return: nothing
 */
int print_pointer(va_list args)
{
	unsigned long int num = va_arg(args, unsigned long int);	int char_count = 0;

	if (num == 0)
	{
		return (_putchar('0')); 
	}
	
	char_count = 0;

	if (num / 16)
		char_count += print_addr(num / 16);

	if ((num % 16) > 9)
		char_count += _putchar((num % 16) + 87);
	else
		char_count += _putchar((num  % 16) + '0');

	return (char_count);
}
