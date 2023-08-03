#include "main.h"
/**
 *print_binary - prints the binary representation of a number
 *@n: unsigned long int
 *Return: void
 */
void print_binary(unsigned long int n)
{
	int lenght = sizeof(n) * 8;
	int i;

	for (i = lenght - 1; i >= 0; i--)
	{
		unsigned long int bit = (n >> i) & 1;

		printf("%lu", bit);
	}
}

