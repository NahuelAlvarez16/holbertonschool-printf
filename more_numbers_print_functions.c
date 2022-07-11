#include "main.h"
/**
 * print_octal - Print an integer in octal base
 * @arg: Integer
 * Return: Number printing length
 */
int print_octal(va_list arg)
{
	int number = va_arg(arg, int);
	int octal_number = 0;

	for (int i = 0; i < number; i++)
	{
		octal_number++;
		if ((octal_number % 10) == 8)
		{
			octal_number += 2;
		}
	}
	return (print_number_recursion(octal_number, 1));
}
