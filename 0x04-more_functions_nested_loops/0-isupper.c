#include "main.h"

/**
 * _isupper - Checks for the uppercase character.
 * @c = The character to be checked.
 *
 * Return: 1 if the character is uppercase, 0 if otherwise.
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
