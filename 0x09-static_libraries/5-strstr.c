#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: first parameter
 * @needle: second parameter
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	char *found;

	if (*haystack == '\0' || *needle == '\0')
	{
		return ('\0');
	}

	found = '\0';

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			int j = 1;

			while (haystack[i + j] != '\0' && needle[j] != '\0')
			{
				if (haystack[i + j] != needle[j])
				{
					break;
				}
				j++;
			}

			if (needle[j] == '\0')
			{
				found = &haystack[i];
			}
		}
	}
	return (found);
}
