#include "main.h"

#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers btwn n & 98
 * @n: Starting point
 * Return: Always 0 (succes)
 */

void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
if (n == 98)
{
printf("%d", n);
printf("\n");
break;
}
else
{
printf("%d, ", n);
}
}
}
else
{
for (; n >= 98; n--)
{
if (n == 98)
{
printf("%d", n);
printf("\n");
break;
}
else
{
printf("%d, ", n);
}
}
}
}
