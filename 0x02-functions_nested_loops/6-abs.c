#include "holberton.c"

/**
 * _abs - computes the abs of an integer
 * @n: the integer to check
 * Return: the absolute value f int
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}
