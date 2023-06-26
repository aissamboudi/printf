#include "main.h"

/**
 * _printf - prints formated output to standard output
 * @format: the formated string
 * Return: the number of printed characters
 */
int _printf(const char *format, ...)
{
	va_list args;
	char *s, c;
	int count = 0, num;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%' && is_specifier(*(format + 1)))
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
				case '%':
					format++;
					count += _putchar('%');
					break;
				case 'd':
				case 'i':
					format++;
					num = va_arg(args, int);
					count += _putstr(_itoa(num));
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
