#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string
 */

int_strlen_recursion(char *s)
{
	int stringit = 0;
	if (*s)
	{
		stringit++;
		stringit += _strlen_recursion(s + 1);
	}

	return (stringit);
}

