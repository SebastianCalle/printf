#include "holberton.h"
/**
 * print_i - print decimal numbers
 * @print: argument
 * Return: the count of print
 */
int print_i(va_list print)
{
	int i, c;

	i = va_arg(print, int);
	c = 0;
	if (i < 0)
	{
		i = -i;
		_putchar('-');
		c++;
	}
	c += _puts(convert(i, 10));
	return (c);
}
/**
 * print_d - print decimal numbers
 * @print: argument
 * Return: the count of print
 */
int print_d(va_list print)
{
	int i, c;

	i = va_arg(print, int);
	c = 0;
	if (i < 0)
	{
		i = -i;
		_putchar('-');
		c++;
	}
	c += _puts(convert(i, 10));
	return (c);
}
/**
 * convert - convert the num in base of parameter
 * @num: num to convert
 * @base: base from convert
 * Return: pointer convert
 */
char *convert(unsigned int num, int base)
{
	static char Representation[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do {
		*--ptr = Representation[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}

/**
 * print_bin - convert integer to binary
 * @print: argument 
 * Return: count print
 */
int print_bin(va_list print)
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
