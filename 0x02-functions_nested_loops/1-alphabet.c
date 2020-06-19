#include "holberton.h"
/**
 * print_alphabet - prints alphabet a - z in lowercase letters
 */
void print_alphabet(void)


{
	int alpha;

	for (alpha = 97; alpha <= 122; alpha++)
		_putchar(alpha);

	_putchar('\n');
}
