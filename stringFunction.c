#include <unistd.h>
#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_c - print a characater
 * @c: list
 * Return: number of character printed
 */

int print_c(va_list c)
{
	return (_putchar(va_arg(c, int)));
}
/**
 * print_s - print a string
 * @s: list
 * Return: number of characyes printed
 */

int print_s(va_list s)
{
	char *str = va_arg(s, char *);
	unsigned int i = 0;
	char *null = "(null)";

	if (str != NULL)
	{
		for (i = 0; str[i]; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = 0; null[i]; i++)
			_putchar(null[i]);
	}
	return (i);
}
/**
 * print_per - print %
 * Return: 1.
 */
int print_per(void)
{
	return (_putchar('%'));
}
/**
 * get_spec - get specific character
 * @c: character
 * Return: pointer to function
 */

int (*get_spec(char c))(va_list)
{
	cs array[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_di},
		{"i", print_di},
		{"b", print_binary},
		{"u", print_u},
		{"o", print_o},
		{"p", print_p},
		{"x", print_x},
		{"X", print_X},
		{"S", print_big_s},
		{"R", print_rot},
		{NULL, NULL}
	};
	int j = 0;

	while (array[j].s != NULL)
	{
		if (array[j].s[0] == c)
		{
			return (array[j].f);
		}
		j++;
	}
	return (0);
}
