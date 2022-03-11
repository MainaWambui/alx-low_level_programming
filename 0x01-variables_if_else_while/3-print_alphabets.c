#include <stdio.h>

/**
 * main - return lowercase characters
 * then prints uppercase characters
 * using put char
 * Return: 0 if successful
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch < = z; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch < = 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
