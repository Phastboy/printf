#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int _strlen(char *s);
int _strlenc(const char *s);
void print_percent(va_list arg, int *count);
void print_char(va_list arg, int *count);
void print_string(va_list arg, int *count);
int _printf(const char *format, ...);

#endif // MAIN_H
