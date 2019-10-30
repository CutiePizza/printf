#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct conversions_specifiers - conversion specifiers
 *
 * @s: string
 * @f: pointer to function
 */

typedef struct conversions_specifiers
{
	char *s;
	int (*f)(va_list);
} cs;
int _putchar(char c);
int print_c(va_list);
int print_s(va_list);
int print_di(va_list);
int print_binary(va_list);
int print_per(void);
void print_rec_b(unsigned int, int *);
char *rot13(char *);
int print_rot(va_list);
int print_u(va_list);
void print_rec_octal(unsigned int, int *);
int print_o(va_list);
int (*get_spec(char c))(va_list);
int _printf(const char *format, ...);
#endif
