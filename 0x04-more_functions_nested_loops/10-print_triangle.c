#include "holberton.h"
/**
 * print_triangle - prints a triangle with n length sides
 * @size : size of triangle
 * Description: print a triangle of size n
 * Return: 0 for success
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');

	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 1; j < (size - i); j++)
			{
				_putchar(' ');
			}
			for (k = j; k <= size; k++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
