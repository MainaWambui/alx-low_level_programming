#include <stdio.h>

/**
 * main - prints lowercase alphabet
 * excluding e and q
 * Return: 0 if successful
 */

int main(void)
{
	char ch = 'a';

	while (ch < = 'z')
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
