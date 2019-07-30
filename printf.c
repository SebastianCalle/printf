#include "holberton.h"
/**
 * _printf - print anything
 * @format: type of format
 * Return: the lenght of print
 */
int _printf(const char * const format, ...)
{
	unsigned int i = 0, len1 = 0, len = 0;
	va_list print;

	va_start(print, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{
			len += _putchar('%');
			i++;
		}
		else if (format[i] == '%')
		{
			len1 += check_case(i, format, print);
			if (len1 == 0)
			{
				if (format[i + 1] == '\n')
				{
					len += _putchar('%');
					len += _putchar('\n');
					break;

				}
				else if (va_arg(print, char *) == 0)
					i += 2;
				len += _putchar(format[i]);
				continue;

			}
			len += len1;
			i++;
		}
		else if (format[i] != '%' && format[i] != '\0')
		{
			len += _putchar(format[i]);
		}
	}
	va_end(print);
	return (len);
}
