#include "main.h"
/**
 * print_alphanet_x10 - function prototype
 *
 *  * desc-prints 10 times the alphabet, in lowercase, followed by a new line.
 *
 *  Return void
 */

void print_alphabet_x10(void)
{
	chat alphabet;
	int times = 1;

	while (times <= 10)
	{
		alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		times++;
	}
}
