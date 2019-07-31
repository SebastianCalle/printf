# _printf 📄

A little printf project
A formatted output conversion C program completed as part of the low-level programming at Holberton School.

## Dependencies
The _printf function was coded on an Ubuntu 14.04 LTS with gcc version 4.8

The function _printf will look for the elements according to the protoype.
The function _printf will return the lenght of the input or -1 if wrong input.
Exist a structure for the format specifiers.
It is included the prototipe of the functions in the holberton.h file.

## What are Printf Function in C?
see Printf man(3)
The C library function int printf(const char *format, ...) sends formatted output to stdout.

## usage example
int _printf(const char *format, ...)
Call the function whit one of these options

- c - Character

--_printf("Actual     : %c\n", 'a');

- d or i - Signed decimal integer notation

- s - String of characters

- % - A '%' is written. No argument is converted. The complete conversion specification is '%%'.

- o - unsigned octal notation

- b - unsigned binary notation

- u - unsigned octal notation

- x - unsigned hexadecimal notation (lowercase)

- X - unsigned hexadecimal notation (UPPERCASE)

- r - reverse string

- R - Print string in ROT13 notation'

###  Example:

_printf("%c \n This is a char", 'h');

```struct
typedef struct print_type
{
	char *c;
	     int (*f)();
	     } print_f;

print_f pp[] = {
	       {"%c", print_c},
	       {"%s", print_s},
	       {"%i", print_d},
	       {"%d", print_d},
	       {"%b", print_b},
	       {"%o", print_o},
	       {"%x", print_X},
	       {"%X", print_XC},
	       {"%r", rev_string},
	       {"%R", rot13}
	       };

```