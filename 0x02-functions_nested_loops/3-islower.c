#include "holberton.h"

/**
 * _islower - check if character is lowercase
 * @c: the character to check
 * Return: 1 if c is lowercase or 0 otherwise
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
