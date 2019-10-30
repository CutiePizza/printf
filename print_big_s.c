#include "holberton.h"
/**
 * print_big_s - prints string.
 * @s: list.
 * Return: string length.
 */
int print_big_s(va_list s)
{
	char *str = va_arg(s, char *);
	unsigned int i = 0;
	int count = 0;
	char *null = "(null)";

	if (str != NULL)
	{
		for (i = 0; str[i]; i++)
		{
			if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
			{
				_putchar('\\');
				_putchar('x');
				_putchar(0 + '0');
				count += 3;
				print_rec_heX(str[i], &count);
			}
			else
			{
				_putchar(str[i]);
				count++;
			}
		}
		return (count);
	}
	else
	{
		for (i = 0; null[i]; i++)
			_putchar(null[i]);
		return (i);
	}
}
