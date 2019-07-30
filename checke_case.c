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
		{"%r", rev_string},
		{"%R", rot13}
	};

	j = 0;
	len = -1;
	while (j < 7)
	{
		if (format[i] == pp[j].c[0])
		{
			if (format[i + 1] == pp[j].c[1])
			{
				len = 0;
				len += pp[j].f(print);
				i++;
				break;
			}
		}
		j++;
	}
	return (len);
}
