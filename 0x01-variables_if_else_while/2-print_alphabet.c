#include <stdio.h>

/**
 * main - Prints a lowercase char
 * from a to z
 * Return:Always 0 if successful
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
