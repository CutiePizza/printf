#include "holberton.h"
int main(void)
{
	_printf("%p", (void *)0x7fff5100b608);
	_printf("\n");

	_printf("%p", NULL);
	_printf("\n");

	_printf("Can you print an address?\n%p\nNice!\n", (void *)0x7fff5100b6f8);
	_printf("\n");

	_printf("Can you print several addresses?\n%p,%p,%p,%p\nNice!\n", (void *)0x7fff5100b6f8, (void *)0x7faf51f0f608, (void *)0x6ff42510b6f8, (void *)0x7fff510236f8);
	_printf("\n");

	_printf("Can you print an address?\n%p\nNice!\n", (void *)-1);
	_printf("\n");

	_printf("%pppp", (void *)0x7fff5100b6f8);
	_printf("\n");

	return (0);
}
