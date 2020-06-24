#include "holberton.h"
/**
 * _islower - checks to see if int is lowercase or not
 * @c: lower case letters
 * Description: prints lower case letters if return is right
 * Return: 0
 */
int _islower(int c)
{
	while (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
