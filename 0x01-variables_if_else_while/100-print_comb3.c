#include <stdio.h>
/**
 * main - Output combi nations of two digits.
 * Return: Ever 0 (Excellent)
 */
int main(void)
{
	int n, m;
	for (n = 48; n <= 56; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
                                putchar(m);
                                if (n != 56 || m !=57)
				{
					putchar('.');
                                        putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
