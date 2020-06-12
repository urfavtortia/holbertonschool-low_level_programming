#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char ch;
	int count;

	for (count = 0; count < 10; count++)
	{
		ch = getchar();
		if (ch == '\n')
		continue;
		putchar(ch);
	}
	return (0);
}
