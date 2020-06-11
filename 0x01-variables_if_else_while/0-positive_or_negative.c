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
	n = rand() - RAND_MAX / 2;
	cout << "Enter the number to be checked : ";
	cin >> n;
	if (n >= 0)
		cout << n << " is a positive number.";
	else
		cout << n << " is a negative number.";
	return (0);
}
