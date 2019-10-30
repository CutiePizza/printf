#include "holberton.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
 int l = UINT_MAX + 1024;
long int res = INT_MAX * 2;
_printf("unsigned int : %u", UINT_MAX + 1024);
_printf("\n\n");

_printf("negative unsigned int : %u", -1024);
_printf("\n\n");

_printf("1024 = %o (base 8)", 1024);
_printf("\n\n");

_printf("-1024 = %o (base 8)", -1024);
_printf("\n\n");

_printf("0 = %u (base 8)", 0);
_printf("\n\n");

_printf("UINT_MAX = %o (base 8)", UINT_MAX);
_printf("\n\n");

_printf("UINT_MAX + 1024 = %o (base 8)", UINT_MAX + 1024);
_printf("\n\n");

_printf("1024 = %x (hexadecimal)", 1024);
_printf("\n\n");

_printf("-1024 = %x (hexadecimal)", -1024);
_printf("\n\n");

_printf("0 = %x (hexadeciaml)", 0);
_printf("\n\n");

_printf("UINT_MAX = %x (hexadecimal)", UINT_MAX);
_printf("\n\n");

_printf("UINT_MAX + 1024 = %x (hexadecimal)", l);
_printf("\n\n");

_printf("16 = %x (hexadecimal)",16);
_printf("\n\n");

_printf("There is %o bytes in %o KB\n", 1024, 1);
_printf("\n\n");

_printf("%x - %x = %x\n", 2048, 1024, 1024);
_printf("\n\n");

_printf("%X", -1024);
_printf("\n\n");

_printf("uuoxxX%xuoXo\n", 1024);
_printf("\n\n");

_printf("%x + %x = %x\n", INT_MAX, INT_MAX, res);

return (0);

}
