#include <stdio.h>
/**
 * main - Outputs possible combinations of three digits.
 * Return: All times 0 (Good)
 */
int main(void)
{
int digit1, digit2, digit3;
for (digit1 = 0; digit1 <= 7; digit1++)
{
for (digit2 = digit1 + 1; digit2 <= 8; digit2++)
{
for (digit3 = digit2 + 1; digit3 <= 9; digit3++)
{
putchar((digit1 % 10) + '0'); /* Print tens digit of digit1 */
putchar((digit2 % 10) + '0'); /* Print tens digit of digit2 */
putchar((digit3 % 10) + '0'); /* Print tens digit of digit3 */
if (digit1 != 7 || digit2 != 8 || digit3 != 9) /* Last combination */
{
putchar(','); /* Print comma */
putchar(' '); /* Print space */
}
}
}
}
putchar('\n'); /* Print newline */
return (0);
}
