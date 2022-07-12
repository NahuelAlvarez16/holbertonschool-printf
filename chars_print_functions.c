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
	int length = 0, result, i;

	for (i = 0; src && src[i]; i++, length++)
	{
		if (src[i] > 32 && src[i] < 127)
			_putchar(src[i]);
		else
		{
			result = src[i] % 16;
			_putchar('\\');
			_putchar('x');
			_putchar((src[i] / 16) + '0');
			_putchar((result + (result < 10 ? 48 : 55));
			length += 3;
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
