#include "main.h"

/**
 * print-alphabet - prints the lowercase alphabet followed by an empty line
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++
	}

	_putchar('\n');
}
