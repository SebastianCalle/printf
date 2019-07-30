#include "holberton.h"
/**
 * rot13 - caesers cipher
 * @print: pointer to an array of words
 *
 * Return: the len of string
 */

int rot13(va_list print)
{
	int a, b;
	char *s;

	char test[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char res[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	s = va_arg(print, char *);
	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; test[b] != '\0'; b++)
		{
			if (s[a] == test[b])
			{
				s[a] = res[b];
				break;
			}
		}
	}
	for (a = 0; s[a] != '\0'; a++)
	{
		_putchar(s[a]);
	}
	return (a);
}
