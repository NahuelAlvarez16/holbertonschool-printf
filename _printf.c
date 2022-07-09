#include "main.h"
/**
 * get_print_function - relate a format to its function
 * @format: format
 * Return: return a print function
 */
int (*get_print_function(char format))(va_list)
{
	format_t formats[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percentage},
	};
	int i;

	i = 0;
	while (i < 3)
	{
		if (formats[i].format == format)
			return (formats[i].print_function);
		i++;
	}
	return (NULL);
}
/**
 * _printf - that produces output according to a format
 * @format: is a character string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i;
	int length = 0;
	va_list arg;

	va_start(arg, 0);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			length += get_print_function(format[i])(arg);
		}
		else
		{
			length++;
			_putchar(format[i]);
		}
	}
	va_end(arg);
	return (length);
}
