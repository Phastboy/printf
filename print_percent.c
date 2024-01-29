#include "main.h"

/**
 * print_percent - prints a percent symbol
 * @args: va_list argument
 * @count: number of characters printed
 *
 * Return: void
 */

void print_percent(va_list args, int *count)
{
	(void)args;

	_putchar(37);
	*count += 1;
}
