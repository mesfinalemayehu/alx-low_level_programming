#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic.
 * @m: The character to be checked.
 *
 * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int m)
{
	if ((m >= 'a' && m <= 'z') ||
	    (m >= 'A' && m <= 'Z'))
		return (1);
	else
		return (0);
}
