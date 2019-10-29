#include <stdio.h>
#include <limits.h>
#include "holberton.h"
int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;
        int t1, t2;
        int a = -2147483648;
        int b = -55441;
        int c = 0;
        int d = -5;
        int e = 884465;
        int f = 2147483647;

        t1 = _printf("Numbers: %d %d %d %d %d %d\n", a, b, c, d, e, f);
        printf("T1 Compteur = %d\n", t1);
        t2 = printf("Numbers: %d %d %d %d %d %d\n", a, b, c, d, e, f);
        printf("T2 Compteur = %d\n", t2);

        printf("\n");

        t1 = _printf("mineCharacter:[%c]\n", 'H');
        printf("T1 Compteur = %d\n", t1);
        t2 = printf("mineCharacter:[%c]\n", 'H');
        printf("T2 Compteur = %d\n", t2);
        printf("\n");

        t1 = _printf("Let's try to printf a simple sentence.\n");
        printf("T1 Compteur = %d\n", t1);
        t2 = printf("Let's try to printf a simple sentence.\n");
        printf("T2 Compteur = %d\n", t2);
        printf("\n");

        t1 = _printf("String:[%s]\n", "I am a string !");
        printf("T1 Compteur = %d\n", t1);
        t2 = printf("String:[%s]\n", "I am a string !");
        printf("T2 Compteur = %d\n", t2);
        printf("\n");

        t1 = _printf("10 o%%\n");
        printf("T1 Compteur = %d\n", t1);
        t2 = printf("10 o%%\n");
        printf("T2 Compteur = %d\n", t2);
        printf("\n");

        t1 = _printf("10 o%%\n");
        printf("T1 Compteur = %d\n", t1);
        t2 = printf("10 o%%\n");
        printf("T2 Compteur = %d\n", t2);
        printf("\n");


	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n");
	/* printf("Unknown:[%r]\n"); */

        return (0);
}
