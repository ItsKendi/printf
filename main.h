#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>


/** format and conversion specifiers prototypes */
extern int _printf(const char *format, ...);
extern int print_parameters(char, va_list);
extern int print_char(va_list);
extern int print_ui_binary(va_list);
extern int print_unsigned(va_list);
extern int print_octal(va_list);
extern int print_hexa(va_list);
extern int print_Hexa(va_list);
extern int print_pointer(va_list args);
extern int print_rot(va_list);
extern int print_percent(va_list);
extern int print_str(va_list);
extern int print_wide_str(va_list);
extern int print_str(char *);
extern int print_digit(va_list);
extern int print_rot(va_list);
extern int print_percent(va_list);

extern int _putchar(char);
extern int print_string(va_list args);
extern int print_integer(int);
extern int print_STRING(char *);
extern int print_binary(unsigned int);
extern int print_HEXA(unsigned int);
extern int print_hexx(unsigned int);
extern int print_oct(unsigned int);
extern int print_uint(unsigned int);
extern int print_addr(unsigned long int);
extern int print_rev(char *);
extern int print_addr(unsigned long int);
extern void check_null(const char *);


/*
* struct identify - holds a string identifier and a function pointer
* @s: is the format specifier
* @print: pointer to function to be called
*/
typedef struct identify
{
	char *s;
	int (*print)(va_list args);
} type_id;

#endif
