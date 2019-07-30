#include "holberton.h"
/**
 * _printf - print anything
 * @format: type of format
 * Return: the lenght of print
 */
int _printf(const char * const format, ...)
{
	int i = 0, len = 0;
	va_list print;

	va_start(print, format);
	if (format == NULL || (format[i] == '%' && format[i + 1] == '\0'))
		return (-1);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			len++;
			i++;
		}
		if (format[i] == '%')
		{
			len += check_case(i, format, print);
			i++;
		}
		if (format[i - 1] == '%' && format[i] == '\0')
			return (-1);

	}
	va_end(print);
	return (len);
}
