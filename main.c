#include "main.h"
#include <stdio.h>
/**
 * main - check te code
 * Return: Always 0
 */
int main(void)
{
int len, len2;

	len = _printf("%");
	len2 = printf("%");
	printf("\n\n\n---------\n");
	printf("Our: %d - System: %d", len, len2);
	return (0);
}
