#include "main.h"

/**
 * print_char - prints a character
 * @args: va_list argument
 * @count: number of characters printed
 *
 * Return: void
 */

int print_char(va_list args, int *count)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	*count += 1;
	return (*count);
}
