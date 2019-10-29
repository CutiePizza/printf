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
  * print_rec_b - print integers in binary
  * @n: integer
  * @d: integer
  * @c: integer
  * Return: length of binary number, c
  */

int print_rec_b(int n, int d, int c)
{
	_printf("c = %d\n", c);		
	if (n < 1)
		return (0);

		print_rec_b(n / d, d, ++c);
		_putchar((n % d) + '0');
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
	int d = 2, k = 0;
	
	if (n == 0)
		return (_putchar(0 + '0'));
	else if (n == 1)
		return (_putchar(1 + '0'));
	else
		k = print_rec_b(n, d, 0);
	return (k);
	
	
}
