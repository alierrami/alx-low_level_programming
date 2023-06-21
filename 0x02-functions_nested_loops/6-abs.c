#include "main.h"
/**
 * _abc - computes the absolute value of an integer.
 * @c: The character to be checked.
 * Return: The absolute value of the integer.
 */
int _abc(int c)
{
	if (c < 0)
	{
		int abc_val;

		abc_val = c * -1;
		return (abc_val);
	}
	return (c);
}
