#include "holberton.h"

/**
 * print_rec_heX - print integers in binary
 * @n: integer
 * @p: integer
 * Return: length of binary number, c
 */

void print_rec_heX(unsigned int n, int *p)
{
	unsigned int c = 65;
	unsigned int a = 0;

	if (n <= 0)
		return;
	*p += 1;
	print_rec_heX(n / 16, p);

	if ((n % 16) >= a && (n % 16) < 10)
	_putchar((n % 16) + '0');
	else if ((n % 16) >= 10 && (n % 16) <= 15)
	{
	c += ((n % 16) % 10);
	_putchar(c);
	}
}

/**
 * print_X - Print integers in octal
 * @x: list
 * Return: number of integers printed.
 */

int print_X(va_list x)
{
	unsigned int n = va_arg(x, unsigned int);
	int k = 0, num;

	if (n == 0)
		return (_putchar(0 + '0'));
	if (n == 1)
		return (_putchar(1 + '0'));
	print_rec_heX(n, &k);
	num = k;
	return (num);
}
