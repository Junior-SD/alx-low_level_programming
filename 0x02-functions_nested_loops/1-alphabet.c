#include "main.h"

/**
 * print_alphabet - will print the alphabet in lower case
 *
 * Return: Always 0 for a successful prog run.
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
