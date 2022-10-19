#include "main.h"

/**
 * print_alphabet-program entry point
 * Return:0 if no error
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
