#include <stdio.h>
/**
 * main - Alphabet printing.
 * Return: Always 0 (Success)
 */
int main(void)
{
int letter;
/* Print lowercase alphabet */
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
/* Print uppercase alphabet */
for (letter = 'A'; letter <= 'Z'; letter++)
{
putchar(letter);
}
putchar('\n'); /* Print newline */
return (0);
}
