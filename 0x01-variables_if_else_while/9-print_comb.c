#include <stdio.h>

/**
 * main - prints all single digit numbers
 * followed by a , and space
 * Return: 0 if successful
 */

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
