#include "main.h"
#include <stdio.h>
/**
 * _strlen - counts the lenght of a string
 * @s: the string
 * Return: the lenght of the string
 */
int _strlen(char *s)
{
	int len = 0;

	if (!s)
		return (0);
	while (s[len] != '\0')
		len++;
	return (len);
}
/**
 * _putchar - prints a character to stdout
 * @c: the character to be printed
 * Return: the number of printed character, in this case 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
int _printf(const char *format, ...)
{
	va_list args;
	char *s, c;
	int count = 0, len;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			count += _putchar(*format);
			format++;
		}
		else
		{
			format++;
			switch(*format)
			{
				case 'c':
					format++;
					c = va_arg(args, int);
					printf("-%c-\n", c);
					_putchar(c);
					break;
				case 's':
					format++;
					s = va_arg(args, char*);
					len = _strlen(s);
					if (len > 0)
						while (*s != '\0')
						{
							_putchar(*s);
							s++;
						}
					break;
				defaul:
					break;
			}
		}
	}
	return (0);
}
int main(void)
{
	_printf("%s\n", "Test");
	return (0);
}
