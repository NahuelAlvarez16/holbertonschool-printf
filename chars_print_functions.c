#include "main.h"
/**
 * print_string - print all characters of arg variable
 * @arg:  string
 * Return: return length of arg variable
 */
int print_string(va_list arg)
{
	int i;
	char *src = va_arg(arg, char *);

	if (!src)
		src = "(null)";
	for (i = 0; src && src[i]; i++)
		_putchar(src[i]);
	return (i);
}
/**
 * print_string_hexadecimal - print all characters and non printable characters
 * @arg: String
 * Return: return length of arg variable
 */
int print_string_hexadecimal(va_list arg)
{
	char *src = va_arg(arg, char*);
	int length, result;

	for (length = 0; src && src[length]; length++)
	{
		if (src[length] > 32)
			_putchar(src[length]);
		else
		{
			result = src[length] % 16;
			_putchar('\\');
			_putchar('x');
			_putchar((src[length] / 16) + '0');
			_putchar((src[length] % 16) + (result < 10 ? 48 : 55));
		}
	}
	return (length);
}
/**
 * print_char - print a char
 * @arg: is a char
 * Return: 1
 */
int print_char(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}
