#include <stdio.h>
#include "main.h"

/**
 * main -  Computes & prints sum of mulltiples of 3 or 5 below 1024
 * Return: Always (Runs)
 */

int main(void)
{
int i, z = 0;
while (i < 1024)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
z += i;
}
i++;
}
printf("%d\n", z);
return (0);
}
