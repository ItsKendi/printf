#include "main.h"

/**
 * print_rot - print's a rot13'ed string
 * @args: va_list
 * Return: count of characters printed
 */

int print_rot(va_list args)
{
	char *s = va_arg(args, char *);
	int char_count, i, j;
	char *letter = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *encode = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	if (s == NULL)
	{
		print_string("(avy)");
	}

	for (i = 0, char_count = 0; *(s + i) != '\0'; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			for (j = 0; *(letter + j) != '\0'; j++)
			{
				if (*(s + i) == *(letter + j))
				{
					char_count += _putchar(*(encode + j));
					break;
				}
			}
		}
		else
		{
			char_count += _putchar(s[i]);
		}
	}

	return (char_count);
}
