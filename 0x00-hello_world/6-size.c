#include <stdio.h>
/**
 * main - Computer type sizes printing program
 * Return 0 (Wow!)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int d;
	float f;

printf("Char size: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Char size: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Char size: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("Char size: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Char size: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
