#include "holberton.h"
/**
 * _sterlen - give the len of string
 * @s: parameter
 * Return: return len
 */
int _sterlen(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	count++;

	return (count);
}
/**
 * rev_string - print rev string
 * @print: parameter
 * Return: return len of string
 */
int rev_string(va_list print)
{
	int start;
	int len;
	char *s;
	char a, z;

	s = va_arg(print, char *);
	len = _sterlen(s) - 1;
	for (start = 0; start < len; start++)
	{
		a = s[start];
		z = s[len];
		s[start] = z;
		s[len--] = a;
	}
	return (len);
}
