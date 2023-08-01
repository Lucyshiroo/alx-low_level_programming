#include "main.h"

/**
 * _strpbrk - first occorrence of a string
 * @s: bytes in a string
 * @accept: matches bytes
 * @s:pointer
 * Return: a pointer to attacted byte
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
