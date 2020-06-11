#include <stdio.h>
/**
* main - entry point
* Return: 0
*/
int main(void)
{

	int i;
	char c;
	long int li;
	long long int lli;
	float f;

	printf("The size of an int is: %lu.\n", (unsigned long)sizeof(i));
	printf("The size of a long int is: %lu.\n", (unsigned long)sizeof(li));
	printf("The size of a c is: %lu.\n", (unsigned long)sizeof(c));
	printf("The size of a long long int is: %lu.\n", (unsigned long)sizeof(lli));
	printf("The size of a float is: %lu.\n", (unsigned long)sizeof(f));

	return (0);
}
