#include "main.h"
/**
 * get_print_function - Match chars with functions
 * @c: A char value
 * Return: A pointer to a function
 */
int (*get_print_function(char c))(va_list)
{
	printing_functions_t cases[] = {
		{'c', print_char},
		{'s', print_string},
		{'S', print_string},
		{'d', print_integer},
		{'i', print_integer},
		{'b', print_binary},
		{'u', print_unsigned_integer},
		{'o', print_octal},
		{'x', print_hexadecimal_lowercase},
		{'X', print_hexadecimal_uppercase},
	};
	int i;

	i = 0;
	while (i < 9)
	{
		if (cases[i].casee == c )
			return (cases[i].f);
		i++;
	}
	return (NULL);
}
/**
 * _printf - Main program function
 * @format: Character string
 * Return: the number of printed characters
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
