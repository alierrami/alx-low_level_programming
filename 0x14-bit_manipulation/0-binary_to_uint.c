#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a pointer to a string of 0 or 1 chars
 * Return: the converted number or 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	int len = strlen(b);
	unsigned int result = 0;
	unsigned int base = 1;

	for (int i = len - 1; i >= 0; i--)
	{
		if (isdigit(b[i]) && (b[i] == '0' || b[i] == '1'))
		{

