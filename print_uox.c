#include "holberton.h"
/**
 * print_u - prints an integer.
 *@di: list.
 * Return: integer's digits number.
 */
int print_u(va_list u)
{
	unsigned int div = 1;
	int c = 0;
	unsigned int n = va_arg(di, int);
	int a = n % 10;

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
