#include "holberton.h"
/**
 * rev_string: reverses string
 *
 *
 *
 */
void rev_string(char *s)
{
	int temp;
	int *end;

	for (end = 0; *end != '\0'; end++);
	for (s = 0; s < end / 2; s++)
	{
		temp = *s;
		*s = *end;
		*end = temp;
	}
	for (s = 0; s < end; s++);
	_putchar('\n');
}
