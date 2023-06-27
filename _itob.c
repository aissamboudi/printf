#include "main.h"

/**
 * _itob - converts an int to binary
 * @n: the integer
 * Return: binary
 */
char *_itob(int n)
{
	char *b;
	int len = 0, num;
	
	num = n;
	while (num > 0)
	{
		len++;
		num /= 2;
	}
	b = malloc(sizeof(char) * (len + 1));
	if (!b)
		return (NULL);
	b[len--] = '\0';
	num = n;
	for (; len >= 0; len--)
	{
		b[len] = (num % 2) + '0';
		num /= 2;
	}
	return (b);
}
