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
		cout << n << " is positive";
	else
		cout << n << " is negative";
	return (0);
}
