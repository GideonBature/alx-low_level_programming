#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination parameter
 * @src: source parameter
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	char *ptr;

	int i, j, k;

	int len1 = 0, len2 = 0;

	for (i = 0; dest[i] != NULL; i++)
	{
		len1++;
	}

	for (j = 0; src[j] != NULL; j++)
	{
		len2++;
	}

	for (k = 0; k <= len2; k++)
	{
		dest[len1 + k] = src[k];
	}

	ptr = dest;

	return (ptr);
}
