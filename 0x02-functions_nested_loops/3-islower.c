#include "main.h"

/**
 * _isslower - check for lowercase charecter
 *
 * Return: 1 for lowercase charecter or 0 for anything else
 */

int _islower(int c)
{
	if (c >=97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
