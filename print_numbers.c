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



/**
 * print_o - convert integer to octal
 * @print: argument
 * Return: count print
 */
int print_o(va_list print)
{
	int  i, j;
	unsigned int num;
	int b[100]; /* create array to save */

	num = va_arg(print, int);
	i = 0;
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num > 0)
	{
		b[i] = num % 8;   /* modulo eight */
		num = num / 8;      /* and divide in eigth */
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(b[j] + '0');
	return (i);
}


/**
 * print_h - convert integer to hexadecimal
 * @print: argument
 * Return: count print
 **/

int print_h(va_list print)
{
	int  i, j, k;
	unsigned int num;
	int b[100];

	num = va_arg(print, unsigned int);
	i = 0, k = 0;
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num >= 0)
	{
		k = num % 16;
		if (k < 10)
			b[i] = 48 + k;
		else
			b[i] = 87 + k;
		num = num / 16;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(b[j]);
	return (i);
}
