#include <stdio.h>
/**
 * main - entry point
 *
 * Return:0
 */
int main(void)
{
unsigned int x;
unsigned int s = 32;
unsigned int c = 44;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);

		if (x <= 56)
		{
		putchar(c);
		putchar(s);
		}
	}

	putchar('\n');

	return (0);
}

