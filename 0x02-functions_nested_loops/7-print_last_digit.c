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
		return ((i % 10) + '0');
	}

	else
	{
		return ((i % 10) + '0');
	}

}
