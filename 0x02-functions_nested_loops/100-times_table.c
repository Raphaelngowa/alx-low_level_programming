#include "main.h"

/**
 * print_times_table - Prints n times table starting with 0
 * @c: Times table value tobe printed.
 */

void print_times_table(int c)
{
int num, mult, prod;
if (c >= 0 && c<= 15)
{
for (num = 0; num <= c; num++)
{
_putchar('0');
for (mult = 1; mult <= c; mult++)
{
_putchar(',');
_putchar(' ');
prod = num * mult;
if (prod <= 99)
_putchar(' ');
if (prod <= 9)
_putchar(' ');
if (prod >= 100)
{
_putchar((prod / 100) + '0');
_putchar(((prod / 10)) % 10 + '0');
}
else if (prod <= 99 && prod >= 10)
{
_putchar((prod / 10) + '0');
}
_putchar((prod % 10) + '0');
}
_putchar('\n');
}
}
}
