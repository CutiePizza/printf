#include "holberton.h"

/**
 * _printf - print a given string and its arguments
 * @format: string
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list list;
	unsigned int i = 0;
	int (*print)(va_list);
	int compteur = 0;

	if (format == NULL)
		return (-1);

	va_start(list, format);
	while (format && format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			compteur++;
		}
		else if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			if (format[i] == '%')
				compteur += print_per();
			else
			{
				print = get_spec(format[i]);
				if (print == 0)
				{
					_putchar('%');
					_putchar(format[i]);
					compteur += 2;
				}
				else
					compteur += print(list);
			}
		}
		else
			return (-1);
		i++;
	}
	va_end(list);
	return (compteur);
}
