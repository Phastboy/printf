#include "main.h"
#include <stdio.h>

/**
 * print_string - prints a string
 * @args: va_list argument
 * @count: number of characters printed
 *
 * Return: void
 */

int print_string(va_list args, int *count)
{
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	while (*str)
	{
		_putchar(*str);
		(*count)++;
		str++;
	}
	return (*count);
}
