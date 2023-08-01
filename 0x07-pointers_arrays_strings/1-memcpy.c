#include <main.h>

/**
* _memcpy - copy from memory area
*@n: fuction to be copied
*@src: bytes from the memory
*@dest: to memory area
*Return: @dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
