#include "main.h"

/**
 * is_specifier - checks if a giver character
 * is int the list of specifiers
 * @c: a char
 * Return: 1 if c is in the list 0 if not
 */
int is_specifier(char c)
{
	char *specifiers = "Ccs%";
	int i;

	for (i = 0; specifiers[i] != '\0'; i++)
	{
		if (c == specifiers[i])
			return (1);
	}
	return (0);
}
