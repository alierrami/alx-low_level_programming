#include <stdio.h>
#include "main.h"
/**
 * main - prints the name of the program
 * @argc_attribute_((unused)): number of arguments
 * @argv: array of arguments
 * Return: always 0
 */
int main(int argc_attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

