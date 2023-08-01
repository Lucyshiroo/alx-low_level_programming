#include "main.h"

/**
 * _memset - fills memory with constant type
 * @s:memory area
 * @n: number of bytes
 * @b: constant byte
 * Return: s always success
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
