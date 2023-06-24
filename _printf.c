#include "main.h"
#include <stdio.h>

/**
 * _printf - prints formated output to standard output
 * @format: the formated string
 * Return: the number of printed characters
 */
int _printf(const char *format, ...)
{
	va_list args;
	char *s, c;
	int count = 0;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format != '%' || (*format == '%' && !is_specifier(*(format + 1))))
		{
			count += _putchar(*format);
			format++;
		}
		else
		{
			format++;
			switch (*format)
			{
				case 'c':
					format++;
					c = va_arg(args, int);
					count += _putchar(c);
					break;
				case 's':
					format++;
					s = va_arg(args, char*);
					count += _putstr(s);
					break;
				default:
					break;
			}
		}
	}
	va_end(args);
	return (count);
}
