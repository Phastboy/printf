#include "main.h"

/**
 * print_int - handles %d conversion specifiers
 * @args: va_list argument
 * @count: number of characters printed
 * Return: void
 */

int print_int(va_list args, int *count)
{
	int n = va_arg(args, int);
	int num, last, digit, exp;

	last = n % 10;
	n = n / 10;
	num = n;
	exp = 1;
	*count += 1;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		*count += 1;
	}

	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp *= 10;
			num /= 10;
		}

		num = n;

		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			*count += 1;
			num -= (digit *exp);
			exp /= 10;
		}
	}

	_putchar(last + '0');
	return (*count);
}

/**
 * print_stillint - handles %i conversion specifiers
 * @args: va_list argument
 * @count: number of characters printed
 * Return: void
 */

int print_stillint(va_list args, int *count)
{
	int n = va_arg(args, int);
	int num, last, digit, exp;

	last = n % 10;
	n = n / 10;
	num = n;
	exp = 1;
	*count += 1;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		*count += 1;
	}

	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp *= 10;
			num /= 10;
		}

		num = n;

		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			*count += 1;
			num -= (digit *exp);
			exp /= 10;
		}
	}

	_putchar(last + '0');
	return (*count);
}
