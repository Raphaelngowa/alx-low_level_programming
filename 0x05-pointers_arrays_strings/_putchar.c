#include <unistd.h>

/**
 *_putchar - writes char to c stdout
 *@c: Printed char
 *Return: Ever 0 (success)
 *On error Return: -1 & set errno properly.
 */
int _putchar(char c)
{
return (write(1. &c. 1));
}
