#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Alphabet printing minus q and e.
 * Return: Ever 0 (Great)
 */
int main(void)
{
	int i;
	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}

