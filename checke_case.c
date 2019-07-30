#include "holberton.h"
/**
 * check_case - check the case of %
 * @format: type of format
 * @i: index of format
 * @print: va_list
 * Return: lenght
 */
int check_case(int i, const char * const format, va_list print)
{
	int j, len;
	print_f pp[] = {
		{"%c", print_c},
		{"%s", print_s},
		{"%i", print_d},
		{"%d", print_d},
		{"%b", print_b},
		{"%o", print_o},
		{"%h", print_h},
	};

	j = 0;
	len = 0;
	while (j < 8)
	{
		if (format[i] == pp[j].c[0])
		{
			if (format[i + 1] == pp[j].c[1])
			{
				len += pp[j].f(print);
				i++;
			}
		}
		j++;
	}
	return (len);
}
