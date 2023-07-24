#include "main.h"
/**
 * puts2 - Prints every other character of a string with the first char.
 * @str: char to check
 * Return: Ever 0 success.
 */
void puts2(char *str)
{
int string;
for (string = 0; str[string] != '\0'; string++)
if (string % 2 == 0)
_putchar(str[string]);
_putchar('\n');
}
