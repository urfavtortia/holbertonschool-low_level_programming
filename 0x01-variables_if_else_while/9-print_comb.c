#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	unsigned int x;

		for (x = 48; x <= 57; x++)
		{
		putchar(x);
		if (x <= 56)
			{
			putchar(',');
			putchar(' ');
			}
		}
		putchar('\n');
		
	return (0);
}
