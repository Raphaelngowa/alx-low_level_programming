#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 *  @c: checked character
 * Return: 1 if it`s a digit, otherwise 0
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
