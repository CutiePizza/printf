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
	else 
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
	}
	c++;
	return (c);
}
/**
  * print_rec_b - print integers in binary
  * @n: integer
  * @p: integer
  * Return: length of binary number, c
  */

void print_rec_b(int n, int *p)
{
	if (n <= 0)
		return;
	*p += 1;
	print_rec_b(n / 2, p);
	_putchar((n % 2) + '0');
}
/**
  * print_binary - print integers in binary
  * @number: list
  * Return: characters printed
  */

int print_binary(va_list number)
{
	unsigned int n = va_arg(number, int);
	int k = 0, num;

	if (n == 0)
		return (_putchar(0 + '0'));
	if (n == 1)
		return (_putchar(1 + '0'));
	print_rec_b(n, &k);
	num = k;
	return (num);
}


/**
 * rot13 - encodes a string with rot13 algorithm.
 * @ch: character
 * Return: Always 0.
 */

char *rot13(char *ch)
{

	int i, j;
	char T[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char I[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; ch[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (T[j] == ch[i])
			{
				ch[i] = I[j];
				break;
			}
		}
	}
	return (ch);
}

int print_rot(va_list rot)
{
	char *str = va_arg(rot, char *);
	char *null = "(null)";
	char *strFinal;
	int i = 0;

	if (str != NULL)
	{
		strFinal = rot13(str);
		for (i = 0; strFinal[i]; i++)
			_putchar(strFinal[i]);
	
	}
	else 
	{
		for (i = 0; null[i]; i++)
			_putchar(null[i]);
	}
	return (i);
}
