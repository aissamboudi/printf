#include "main.h"

/**
 * _itoa - converts an integer to alpha
 * @n: the number to convert
 * Return: a pointer to char
 */
char *_itoa(int n)
{
	char *s;
	int len = 2, num, sign = 0;

	if (n < 0)
	{
		sign = 1;
		n *= -1;
	}
	num = n;
	while (num / 10 >= 0)
	{
		if (num / 10 == 0)
			break;
		num /= 10;
		len++;
	}
	s = malloc(sizeof(char) * (sign + len--));
	if (!s)
		return (NULL);
	s[len--] = '\0';
	num = n;
	len += sign;
	for (; len >= 0; len--)
	{
		s[len] = (num % 10) + '0';
		if (len == sign)
		{
			s[sign] = num + '0';
			break;
		}
		num /= 10;
	}
	if (sign == 1)
		s[0] = '-';
	return (s);
}
