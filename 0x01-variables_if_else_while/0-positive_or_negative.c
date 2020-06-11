#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main = entry point
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	if (n >= 0)
		cout << n << printf(" is positive\n)";
	else
		cout << n << printf(" is negative\n");
	return (0);
}
