#include "main.h"

/**
 * _strchr - locate a character
 * @c: occurrence of character
 * @s: string
 * Return: c if character is found
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
