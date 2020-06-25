#include "holberton.h"
/**
 * _strlen - prints the string length
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int i, len;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
		len++;

	return (len);
}
