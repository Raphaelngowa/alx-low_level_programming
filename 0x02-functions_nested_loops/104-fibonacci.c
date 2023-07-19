#include <stdio.h>
#include "main.h"

/**
 * main - Finds and print the first 98 Fibonacci numbers starting from 1 & 2,
 * Return: Always 0 (Excellent)
 */

void print_fibonacci_numbers(int count) 
{
int first = 1, second = 2;
int next;
printf("%d, %d, ", first, second);
for (int i = 3; i <= count; ++i) 
{
next = first + second;
printf("%d", next);
if (i < count)
{
printf(", ");
}
first = second;
second = next;
}
printf("\n");
}
int main() 
{
int count = 98;
print_fibonacci_numbers(count);
return 0;
}
