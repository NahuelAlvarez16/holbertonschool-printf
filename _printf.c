#include "main.h"
/**
 * 
 */

int _printf(const char *format, ...)
{
	int i;
	char *arg;

	va_start(arg, 0);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			selector(format[i], arg);			
		}
		else
		{
		}
	}
}

void selector(char format, char *arg)
{
	char *tmp = malloc(1024);
	tmp[0] = va_arg(arg,
		       	format == 'c' ? int 
			: format == 's' ? char * 
			: nu:xll)
}
