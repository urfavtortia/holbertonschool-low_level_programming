#include "holberton.h"
/**
 * print_last_digit - prints the last digit of int
 * @i: value
 * Return: 0
 */
int print_last_digit(int i)
{
	if (i < 0)
	{
		i = (i * -1);
		_putchar((i % 10) + '0');
		return (i % 10);
	}

	else
	{
		_putchar((i % 10) + '0');
		return (i % 10);
	}

return (0);
}
