#include "main.h"

/**
 * _puts - prints a string followed by a new.
 * @str: the string
 *Return: Void
*/

void _puts(char *str)
{
int i = 0;
while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
