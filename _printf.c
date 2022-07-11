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
		{'d', print_integer},
		{'i', print_integer},
		{'b', print_binary},
		{'u', print_unsigned_integer},
	};
	int i;

	i = 0;
	while (i < 5)
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
	int (*print_function)(va_list);
	va_list arg;

	if (!format)
		return (-1);
	va_start(arg, 0);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			print_function = get_print_function(format[i]);
			if (print_function)
				length += print_function(arg);
			else if (format[i])
			{
				if (format[i] != '%')
					_putchar('%');
				_putchar(format[i]);
				length += format[i] == '%' ? 1 : 2;
			}
			else
				return (-1);

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
