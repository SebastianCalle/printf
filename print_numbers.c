#include "holberton.h"
/**
 * print_number - print integers
 * @n: parameter
 * Return: the count of print
 */
int print_d(va_list print)
{
	int m = va_arg(print, int);
	int c;

	c = 0;
	c = print_dx(m);

	return (c);
}
/**
 * print_number - print integers
 * @n: parameter
 * Return: the count of print
 */
int print_dx(int n)
{
	unsigned int m = n;

	if (n < 0)
	{
		_putchar('-');
		m = m * -1;
	}

	if ((m / 10) > 0)
	{
	return(print_dx(m / 10) + 1);

	}

	_putchar((m % 10) + '0');

	return (0);
}
