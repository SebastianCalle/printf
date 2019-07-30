#include "holberton.h"
/**
 * print_d - Entry point
 *@print: the integer to print
 * Return: no return
 */
int print_d(va_list print)
{
	int i, len, r, l;
	unsigned int abs, num, numt;
	int n = va_arg(print, int);

	len = 0;
	i = 0;
	r = 1;
	l = 1;
	if (n < 0)
	{
		_putchar('-');
		len++;
		abs = -n;
	} else
	{
		abs = n;
	}

	num = abs;
	while (num > 0)
	{
		num /= 10;
		i++;
	}

	while (r < i)
	{
		l *= 10;
		r++;
	}
	while (l >= 1)
	{
		numt = (abs / l) % 10;
		_putchar(numt + '0');
		len++;
		l /= 10;
	}
	return (len);
}
/**
 * print_b - convert integer to binary
 * @print: argument
 * Return: count print
 */
int print_b(va_list print)
{
	unsigned int num;
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
