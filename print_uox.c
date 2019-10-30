#include "holberton.h"
#include <stdio.h>
/**
 * print_u - prints an integer.
 * @u: list.
 * Return: integer's digits number.
 */
int print_u(va_list u)
{
	unsigned int div = 1;
	int c = 0;
	unsigned int n = va_arg(u, unsigned int);
	unsigned int a = n % 10;

	n = n / 10;

	if (n == 0)
		_putchar(a + '0');
	else if (n > 0)
	{
		while (n / div >= 10)
			div *= 10;
		for (; div >= 1; div /= 10)
		{
			_putchar((n / div) + '0');
			c++;
			n = n % div;
		}
		_putchar(a + '0');
	}
	c++;
	return (c);
}

/**
 * print_rec_8 - print integers in binary
 * @n: integer
 * @p: integer
 * Return: length of binary number, c
 */

void print_rec_octal(unsigned int n, int *p)
{
	if (n <= 0)
		return;
	*p += 1;
	print_rec_octal(n / 8, p);
	_putchar((n % 8) + '0');
}
/**
 * print_o - Print integers in octal
 * @o: list
 * Return: number of integers printed.
 */

int print_o(va_list o)
{
	unsigned int n = va_arg(o, int);
	int k = 0, num;

	if (n == 0)
		return (_putchar(0 + '0'));
	if (n == 1)
		return (_putchar(1 + '0'));
	print_rec_octal(n, &k);
	num = k;
	return (num);
}
