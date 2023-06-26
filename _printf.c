#include "main.h"

/**
 * _printf - prints formated output to standard output
 * @format: the formated string
 * Return: the number of printed characters
 */
int _printf(const char *format, ...)
{
	va_list curr_arg;
	char *s, c;
	int c_args, count = 0, num;

	va_start(curr_arg, format);
	c_args = count_args(format);
	if (!format || (format[0] == '%' && ! format['1']))
		return (-1);
	while (*format != '\0')
	{
		if (*format == '%' && is_specifier(*(format + 1)))
		{
			format++;
			switch (*format)
			{
				case 'c':
					format++;
					c = va_arg(curr_arg, int);
					count += _putchar(c);
					c_args--;
					break;
				case 's':
					format++;
					s = va_arg(curr_arg, char*);
					count += _putstr(s);
					c_args--;
					break;
				case '%':
					format++;
					count += _putchar('%');
					break;
				case 'd':
				case 'i':
					format++;
					num = va_arg(curr_arg, int);
					count += _putstr(_itoa(num));
					c_args--;
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
	va_end(curr_arg);
	return (count);
}
