#include "holberton.h"
/**
 * print_d - Entry point
 *@print: the integer to print
 * Return: no return
 */
int print_d(va_list print)
{
	int n = va_arg(print, int);
	int num, last = n % 10, digit, exp = 1;
	int  i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}

/**
 * print_u - Entry point
 *@print: the integer to print
 * Return: no return
 */
int print_u(va_list print)
{
	unsigned int n = va_arg(print, int);
	int num, last = n % 10, digit, exp = 1;
	int  i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
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
