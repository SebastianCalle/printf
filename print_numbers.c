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
	return (1);
}
/**
 * print_bin - convert integer to binary
 * @print: argument
 * Return: count print
 */
int print_b(va_list print)
{
	unsigned int c;
	int  i, j;
	int b[100]; /* create array to save the binary */

	num = va_arg(print, int);
	i = 0;
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num > 0)
	{
		b[i] = num % 2;   /* modulo two */
		num = num / 2;      /* and divide in two */
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(b[j] + '0');
	return (i);
}
