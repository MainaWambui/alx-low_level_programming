#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first int
 * @b: second integer
 * @c: third int
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if(a > b && b > c)
	{
		largest = a;
	}
	else if (b > a && a > c)
	{
		largest = b;
	}
	else if (c > a && a > b)
	{
		largest = c;
	}
	return (largest)
}
