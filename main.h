#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

/**
 * struct format - struct for format
 * @type: type of format
 * @f: function to print
 */

typedef struct format
{
    char *type;
    int (*f)();
} format_t;

int _putchar(char c);
int _strlen(char *s);
int _strlenc(const char *s);
int print_percent(va_list arg, int *count);
int print_char(va_list arg, int *count);
int print_string(va_list arg, int *count);
int print_int(va_list arg, int *count);
int print_stillint(va_list arg, int *count);
int _printf(const char *format, ...);

#endif /* MAIN_H */
