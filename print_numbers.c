#include "holberton.h"
/**
 * print_d - call function printdx
 * @print: va_list
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
 * print_dx - print integers
 * @n: integer passed
 * Return: the count of print
 *
 */
int print_dx(int n)
{
	unsigned int m, d, c;
	int count = 0;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
		count++;
	}
	else
	{
		m = n;
	}

	d = m;
	c = 1;

	while (d > 9)
	{
		d /= 10;
		c *= 10;
		count++;
	}

	for (; c >= 1; c /= 10)
	{
		_putchar(((m / c) % 10) + 48);
		count++;
	}
	return (count);
}
/**
 * print_prc - print porcent
 * @print: va_list argument
 * Return: the count 
 */
int print_prc(void)
{
	_putchar(37);
	return(1);
}
