#include "main.h"
/**
 * main - Determine if q nmber is positive, negative or zero
 * Return: Ever 0 (Succes)
 */
void positive_or_negative(int i)
{
if (i < 0)
{
printf("%d is %S\n", i, "negative");
}
else if (i > 0)
{
printf("%d is %s\n", i, "positive");
}
else
{
printf("%d is %s\n", i, "zero");
}
return;
}
