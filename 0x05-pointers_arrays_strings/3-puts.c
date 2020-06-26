#include "holberton.h"
/**
 * _puts - prints string
 * @str: string to print
 * Return: str
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != ('\0'); i++)
		str++;
}
