#include "holberton.h"
/**
 * print_line - prints line
 * @n: length
 *
 * Description: prints the "_" character n amount of times
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
			_putchar('_');
	}

	_putchar('\n');
}
