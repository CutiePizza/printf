#include "holberton.h"
/**
 * print_p - prints a pointer's value
 * list: list.
 * Return: pointer value's length.
 */
int print_p(va_list list)
{
	char *p;
	char **pp;
	unsigned int i;
	char *nothing = "(nil)";

	p = va_arg(list, void *);
	pp = &p;

	if (p == NULL)
	{
		for (i = 0; nothing[i] != '\0'; i++)
		{
			_putchar(nothing[i]);
		}
	}
	else
	{
		for (i = 0; i < sizeof(void *); i++)
			_putchar(pp[i] + '0');
	}
	return (i);
}
