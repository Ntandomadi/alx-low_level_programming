#include "main.h"

/**
 * _isalpha - checks for alphabetic charecter
 *
 * Return: 1 for alphabetic charecter or 0 for anything else
 */

int _isalpha(int c)
{
	if ((c >= 65 && <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
