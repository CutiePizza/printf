#include "holberton.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	int l = UINT_MAX + 1024;
/*	long int res = INT_MAX * 2;*/

	_printf("--------------------UNSIGNED INT---------------\n");
	_printf("1024 = %u\n\n", 1024);
	_printf("-1024 = %u\n\n", -1024);
	_printf("0 = %u\n\n", 0);
	_printf("UINT_MAX = %u\n\n", UINT_MAX);
	_printf("UINT_MAX + 1024 = %u\n\n", l);
	_printf("There is %u bytes in %u KB\n\n", 1024, 1);
	_printf("%u - %u = %u\n\n", 2048, 1024, 1024);
	/* _printf("%u + %u = %u\n\n", INT_MAX, INT_MAX, res);*/


	_printf("----------------------OCTAL---------------------\n");
	_printf("1024 = %o\n\n", 1024);
	_printf("-1024 = %o\n\n", -1024);
	_printf("zero = %u\n\n", 0);
	_printf("UINT_MAX = %o\n\n", UINT_MAX);
	_printf("UINT_MAX + 1024 = %o\n\n", l);
	_printf("There is %o bytes in %o KB\n\n", 1024, 1);
	_printf("%o - %o = %o\n\n", 2048, 1024, 1024);
	/*_printf("%o + %o = %o\n\n", INT_MAX, INT_MAX, res);*/


	_printf("-------------------HEX----------------------\n");
	_printf("1024 = %x\n\n", 1024);
	_printf("-1024 = %x\n\n", -1024);
	_printf("zero = %x\n\n", 0);
	_printf("UINT_MAX = %x\n\n", UINT_MAX);
	_printf("UINT_MAX + 1024 = %x\n\n", l);
	_printf("There is %x bytes in %x KB\n\n", 1024, 1);
	_printf("%x - %x = %x\n\n", 2048, 1024, 1024);
	/*_printf("%x + %x = %x\n\n", INT_MAX, INT_MAX, res);*/

	_printf("Big X :\n\n");
	_printf("1024 = %X\n\n", 1024);
	_printf("-1024 = %X\n\n", -1024);
	_printf("zero = %X\n\n", 0);
	_printf("UINT_MAX = %X\n\n", UINT_MAX);
	_printf("UINT_MAX + 1024 = %X\n\n", l);
	_printf("There is %X bytes in %X KB\n", 1024, 1);
	_printf("%X - %X = %X\n", 2048, 1024, 1024);
	/*_printf("%X + %X = %X\n", INT_MAX, INT_MAX, res);*/


	_printf("ALL OF THEM\n");
	_printf("%u == %o == %x == %X\n\n", 1024, 1024, 1024, 1024);
	_printf("uuoxxX%xuoXo\n\n", 1024);
return (0);
}
