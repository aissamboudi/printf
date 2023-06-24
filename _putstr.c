#include "main.h"
/**
 * _putstr - prints a string
 * @s: the string to be printed
 * Return: the number of printed characters
 */
int _putstr(char *s)
{
	int i = 0, count = 0;

	if (!s || *s == '\0')
		return (0);
	while (s[i] != '\0')
		count += _putchar(s[i++]);
	return (count);
}
