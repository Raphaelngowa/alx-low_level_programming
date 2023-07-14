#include <std.io>
#include <unistd.h>

/**
 * main - Standard error line printing program
 *
 * Return: 1 (Great)
 */
int main(void)
{
        write(2,
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 24);
        return (1);
}
