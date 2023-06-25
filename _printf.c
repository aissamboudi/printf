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
		if (*format == '%' && is_specifier(*(format + 1)))
		{
			format++;
			switch (*format)
			{
				case 'c':
				case 'C':
			i		format++;
					c = va_arg(args, int);
					count += _putchar(c);
					break;
				case 's':
					format++;
					s = va_arg(args, char*);
					count += _putstr(s);
					break;
				case '%':
					format++;
					count += _putchar('%');
					break;
				default:
					break;
			}
		}
		else
		{
			count += _putchar(*format);
			format++;
		}
	}
	va_end(args);
	return (count);
}
