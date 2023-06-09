#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * wildcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0
 */
int wildcmp_no_wildcards(char *s1, char *s2);
int wildcmp(char *s1, char *s2)
{
	if (s1 == NULL || s2 == NULL)
	{
		return (0);
	}
	return (wildcmp_no_wildcards(s1, s2) || wildcmp(s1 + 1, s2 + 1));
}

/**
 * wildcmp_no_wildcards - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0
 */
int wildcmp_no_wildcards(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	
	if (*s1 != '*' && *s1 != *s2)
	{
		return (0);
	}
	
	if (*s1 == '*')
	{
		return (wildcmp_no_wildcards(s1 + 1, s2));
	}
	return (wildcmp_no_wildcards(s1 + 1, s2 + 1));
}

