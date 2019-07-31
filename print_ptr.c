#include "holberton.h"
/**
 * print_ptr - print address of a pointer
 * @print: print pointer
 * Return: the pointer
 */
int print_ptr(va_list print)
{
	void *s;
	char n[] = "(nil)";
	unsigned int i = 0, c = 0;
	unsigned long int p;

	s  = va_arg(print, void *);
	if (s == NULL)
	{
		for (i = 0; n[i]; i++)
			_putchar(n[i]);
		return (i);

	}
	 _putchar('0');
	 _putchar('x');
	p = (unsigned long int)s;
	c = print_h_ax(p);

	return (c + 2);

}
