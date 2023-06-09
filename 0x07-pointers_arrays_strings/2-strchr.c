#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character to be checked in the string
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	for ( ; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
			break;
		}
	}
	return (NULL);
}
