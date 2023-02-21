#include <unistd.h>

/**
 * _putchar - write the charecter c
 *
 * Return: 1 success
 * on error, -1 is returned, and errno is set approppriatly.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
