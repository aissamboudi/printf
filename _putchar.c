#include "main.h"
/**
 * _putchar - prints a character to stdout
 * @c: the character to be printed.
 * Return: the number of printed character, in this case 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

