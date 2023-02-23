#include "main.h"

/**
 * print_alphabet_x10 - will print 10 times the alphabet, lowercase
 *
 * Return: Always 0 for a successful prog run
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
