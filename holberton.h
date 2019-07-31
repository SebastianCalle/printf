#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
int _printf(const char * const format, ...);
int check_case(int i, const char * const format, va_list print);
/**
 * struct print_type - struct of the print all
 * @c: string char
 * @f: pointer to function
 */
typedef struct print_type
{
	char *c;
	int (*f)();
} print_f;
int print_c(va_list print);
int print_s(va_list print);
int print_fl(va_list print);
int print_d(va_list print);
int print_h(va_list print);
int print_hx(va_list print);
int print_dx(int n);
int print_b(va_list print);
int print_o(va_list print);
int print_u(va_list print);
int print_ptr(va_list print);
int print_h_ax(unsigned long int a);
int _puts(char *str);
int _putchar(char c);
int _strlen(char *s);
int rev_string(va_list print);
int _puts(char *s);
int rot13(va_list print);
char *convert(unsigned int num, int base);
#endif
