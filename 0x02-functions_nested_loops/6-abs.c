#include "holberton.h"
/**
 * _abs - computes the absolute value of int
 * @i : value
 * Description - will print absolute value
 * Return: 0
 */
int _abs(int i)
{
	if (i <= 0)
	{
		i = (i * -1);

		return (i);
	}

	else if (i >= 0)
	{
		i = (i * 1);

		return (i);
	}
return (0);
}
