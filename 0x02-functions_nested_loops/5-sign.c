#include "main.h"

/**
 * print sign - Number sign
 * @c: Checked number
 * Return: 1 for +ve number & -1 for -ve number & 0 for anything else
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
