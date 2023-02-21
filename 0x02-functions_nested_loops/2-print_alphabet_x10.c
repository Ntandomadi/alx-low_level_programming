#include "main.h"

/**
 * print_alphabet_x10 - make alphabet x10
 *
 * return: void
 */

void print_alphabet_x10(void)
{
	char c;
	int b;

	while (b <= 9)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	b++;
	}
}
