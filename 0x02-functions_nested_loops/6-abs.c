#include "main.h"
/**
 * _abs - Computes the absolute value of an integer.
 * @c: The character to be checked.
 * Return: The absolute value of the integer.
 */
int _abs(int c)
{
	if (c < 0)
	{
		int value;

		value = c * -1;
		return (value);
	}
	return (c);
}
