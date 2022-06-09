#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 * @C: The character to be checked
 *
 * Return: 1 if characterb is uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
