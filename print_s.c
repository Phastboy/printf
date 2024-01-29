#include "main.h"
#include <stdio.h>

/**
 * print_string - prints a string
 * @args: va_list argument
 * @count: number of characters printed
 *
 * Return: void
 */

void print_string(va_list args, int *count)
{
	char *str = va_arg(args, char *);
	int i;

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
		*count += 1;
	}
}
