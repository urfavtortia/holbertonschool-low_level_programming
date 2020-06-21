#include "holberton.h"
/**
 * print_line - prints n length line
 * @n: length
 *
 * Return: null
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
			break;
		_putchar('_');
	}

	_putchar('\n');
}
