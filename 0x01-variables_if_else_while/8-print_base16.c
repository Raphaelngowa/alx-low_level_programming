#include <stdio.h>
/**
 * main - Outputs letters a to f and numbers 0 to 9.
 *
 * Return: Ever 0 (Excellent)
 */
int main(void)
{
	int i;
	for (i=48; i < 58; i++)
	{
	putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

