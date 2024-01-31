#include "main.h"

/**
 * _printf - prints anything
 * @format: list of types of arguments passed to the function
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	format_t p[]= {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL}
	};
	va_list args;
	int i, j, count = 0;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; p[j].type != NULL; j++)
			{
				if (format[i + 1] == p[j].type[0])
				{
					count += p[j].f(args);
					break;
				}
			}
			if (p[j].type == NULL)
			{
				_putchar(format[i]);
				count++;
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(args);
	return (count);
}
