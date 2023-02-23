#include "main.h"

/**
 * _isalpha - will check for alphabetic characters.
 * @c: is the character that will be checked
 * Return: 1 if c is the character, otherwise 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
