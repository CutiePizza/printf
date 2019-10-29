#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_di - prints an integer.
 *@di: list.
 * Return: integer's digits number.
 */
int print_di(va_list di)
{
	unsigned int div = 1;
	int c = 0;
	int n = va_arg(di, int);
	int a = n % 10;

	n = n / 10;

	if (a < 0 || n < 0)
	{
		n *= -1;
		a *= -1;
		_putchar('-');
		c++;
	}
	if (n == 0)
	{
		c++;
		_putchar(a + '0');
	}
	else if (n > 9)
	{
		while (n / div >= 10)
		{
			div *= 10;
		}
		for (; div >= 1; div /= 10)
		{
			_putchar((n / div) + '0');
			c++;
			n = n % div;
		}
		_putchar(a + '0');
		c++;
	}
	return (c);
}

/**
  * print_binary - print integers in binary
  * @number: list
  * Return: characters printed
  */

int print_binary(va_list number)
{
	int n = va_arg(number, int);
	int d = 2, c = 1, i;

	while (n / d >= 1)
	{
		d *= 2;
		c++;
	}

	for (i = 0; i < c; i++)
	{
		if (n % d == 0)
			_putchar(1 + '0');
		else
			_putchar(0 + '0');
		n = n / 2;
	}
	return (c);
}
