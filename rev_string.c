#include "holberton.h"
/**
 * rev_string - print rev string
 * @print: parameter
 * Return: return len of string
 */
int rev_string(va_list print)
{

	char *s = va_arg(print, char*);
	int i;
	int j = 0;

	if (s == NULL)
		s = "(null)";
	while (s[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);
	return (j);
}
