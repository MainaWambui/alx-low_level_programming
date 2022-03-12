#include <stdio.h>

/**
 * main - prints single digit numbers with variable char
 * using putchar
 * Return: 0 if successful
 */

int main(void)
{
	int number;

	for (number = 48; number < 58; number++)
		putchar(number);
	putchar('\n');
	return (0);
}
