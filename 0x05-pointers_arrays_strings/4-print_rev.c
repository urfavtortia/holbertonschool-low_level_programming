#include "holberton.h"
/**
 * print_rev - prints str in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int len = 0, i;

	while (s[len] != 0)
	{
		len++;
	}
	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
