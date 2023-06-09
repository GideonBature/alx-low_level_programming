#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination parameter
 * @src: source parameter
 * @n: bytes parameter
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, k, l;

	int len1 = 0, len2 = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len1++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		len2++;
	}

	for (k = 0; k < n && k <= len2; k++)
	{
		dest[len1 + k] = src[k];
	}

	for ( ; l < n; l++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
