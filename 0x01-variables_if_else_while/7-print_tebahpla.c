#include <stdio.h>
/**
 * main - reverse lowercase alphabets,followed by a new line.
 * Return: Ever 0 (Excellent)
 */
int main(void)
{
int letter;
/* Print lowercase alphabet in reverse */
for (letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter);
}
putchar('\n'); /* Print newline */
return (0);
}
