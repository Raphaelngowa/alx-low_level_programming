#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: checked character
 * Return: 1 for alphabets and 0 for anything else
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 95) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
