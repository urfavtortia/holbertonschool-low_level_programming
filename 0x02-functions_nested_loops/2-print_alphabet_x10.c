#include "holberton.h"
/**
 * print_alphabet_x10 - print alphabet 10x
 *
 * Return: always zero
 */
void print_alphabet_x10(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);
		}

	_putchar('\n');
	}
}
