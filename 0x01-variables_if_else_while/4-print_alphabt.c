#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints all lower cases a - z except q&e.
 *
 * Return: 0 on success
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'q' && letter != 'e')
putchar(letter);
}
putchar('\n');
return (0);
}
