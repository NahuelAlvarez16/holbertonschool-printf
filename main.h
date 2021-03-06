#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdarg.h>
typedef struct cases
{
	char casee;
	int (*f)(va_list);
} printing_functions_t;
int _putchar(char c);
int print_string(va_list arg);
int print_string_hexadecimal(va_list arg);
int print_char(va_list arg);
int print_integer(va_list arg);
int print_binary(va_list arg);
int print_unsigned_integer(va_list arg);
int print_octal(va_list arg);
int print_hexadecimal_uppercase(va_list arg);
int print_hexadecimal_lowercase(va_list arg);
int _printf(const char *format, ...);
int print_number_recursion(unsigned int number, int sign);
#endif
