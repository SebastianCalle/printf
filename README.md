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

Conversion Specifiers

The conversion specifier (introduced by the character %) is a character that specifies the type of conversion to be applied. 
The _printf function supports the following conversion specifiers:

**d**, **i**
The int argument is converted to signed decimal notation.

Example main.c:

int main(void)
{
    _printf("%d\n", 7);
}

Output: 7

**b**
The unsigned int argument is converted to signed decimal notation.

Example main.c:

int main(void)
{
    _printf("%b\n", 7);
}
Output: 111

**o**, **u**, **x**, **X**
The unsigned int argument is converted to unsigned octal (o), unsigned decimal (u), or unsigned hexadecimal (x and X). The letters abcdef are used for x conversions and the letters ABCDEF are used for X conversions.

Example main.c:

int main(void)
{
    _printf("%o\n", 77);
}
Output: 115

**c**

The int argument is converted to an unsigned char.

Example main.c:

int main(void)
{
    _printf("%c\n", 48);
}
Output: 0

**s**

The const char * argument is expected to be a pointer to a character array (aka. pointer to a string). Characters from the array are written starting from the first element of the array and ending at, but not including, the terminating null byte (\0).

Example main.c:

int main(void)
{
    _printf("%s\n", "Hello, World!");
}
Output: Hello, World!

**R**

Identical to the s conversion specifier, except each character of the array is converted to its corresponding character in ROT13 before being written.

Example main.c:

int main(void)
{
    _printf("%R\n", "Hello, World");
}
Output: Uryyb, Jbeyq
