#include "holberton.h"
/**
 * _isalpha - prints 1 if letter, 0 otherwise
 * @c : character
 * Return: always 0
 */
int _isalpha(int c)
{
	while (c >= 65 && c <= 122)
	{
		return (1);
	}

return (0);
}
