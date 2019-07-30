#include "holberton.h"
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
	while (num != 0)
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

/**
 * print_hx - convert integer to hexadecimal
 * @print: argument
 * Return: count print
 **/

int print_hx(va_list print)
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
	while (num != 0)
	{
		k = num % 16;
		if (k < 10)
			b[i] = 48 + k;
		else
			b[i] = 55 + k;
		num = num / 16;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(b[j]);
	return (i);
}
