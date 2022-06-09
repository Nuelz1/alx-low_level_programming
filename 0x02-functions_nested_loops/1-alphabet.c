#include "main.h"

/**
 * print alphabet - function prototype
 * desc-prints the alphabet in lowercase.
 *
 * return Always 0 (success)
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	{
		_putchar('\n');
	}
}
