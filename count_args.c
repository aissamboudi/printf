#include "main.h"

/**
 * count_args - counts the number of passed arguments
 * to _printf
 * @format: a string
 * Return: the number of args
 */
int count_args(const char *format)
{
	int count = 0, i = 0;

	while (format[i] != '\0')
	{
		if (format[i] == '%' && is_specifier(format[i + 1]) && format[i + 1] != '%')
			count++;
		i++;
	}
	return (count);

}
