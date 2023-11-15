#include "main.h"
#include <stdio.h>
#include <string.h>


/**
 * print_unsigned - prints unsigned integer
 * @args: va_list
 * Return: count of characters printed
 */

int print_unsigned(va_list args)
{
	return (print_uint(va_arg(args, unsigned int)));
}

/**
* print_octal - prints an unsigned integer in octal
* @args: va_list
*
* Return: count of characters printed
*/
int print_octal(va_list args)
{
	return (print_oct(va_arg(args, unsigned int)));
}

/**
* print_hexa - prints an unsigned integer in hexadecimal
* @args: va_list
*
* Return: count of characters printed
*/
int print_hexa(va_list args)
{
	return (print_hexx(va_arg(args, unsigned int)));
}

/**
* print_Hexa - prints out an unsigned integer in Hexa
* @args: va_list
*
* Return: count of character printed
*/
int print_Hexa(va_list args)
{
	return (print_HEXA(va_arg(args, unsigned int)));
}

/**
* print_pointer - prints out an unsigned integer
* @args: va_list
*
* Return: count of characters printed
*/
int print_pointer(va_list args)
{
	_putchar('0');
	_putchar('x');
	return (print_addr(va_arg(args, unsigned long int)) + 2);
}
