#include "holberton.h"
/**
 * _isupper - checks if letter is uppercase
 * @c: variable to test
 * Return: 1 for uppercase, otherwise 0
 */
int _isupper(int c)

{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	else
		return (0);
}
