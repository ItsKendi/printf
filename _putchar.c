#include <unistd.h>
/**
 * _putchar - writes a character to the standard output
 * @c: the character to be written
 *
 * This function writes a single character to the standard output.
 * It is commonly used to print characters to the console.
 *
 * Return: On success, the character written. On error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
