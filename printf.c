#include "holberton.h"
/**
 * _printf - print anything
 * @format: type of format
 * Return: the lenght of print
 */
int _printf(const char * const format, ...)
{
	int i = 0, len1 = 0, len = 0;
	va_list print;

	va_start(print, format);
	if (format == NULL || (format[i] == '%' && format[i + 1] == '\0'))
		return (-1);
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] != '%' && format[i] != '\0')
		{
			_putchar(format[i]);
			len++;
		}
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			len1 += check_case(i, format, print);
			if (len1 == 0)
			{
				_putchar(format[i]);
				_putchar(format[i + 1]);
				len += 2;
			}
			len += len1;
			i++;
		}
	}
	va_end(print);
	return (len);
}
