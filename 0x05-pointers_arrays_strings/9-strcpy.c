#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src,
 * @dest: destination.(copy to)
 * @src: source.(copy from)
 *
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)

	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
		count++;
	}
	return (dest);
}
