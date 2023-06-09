#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * is_palindrome - checks if it is a palindrome
 * @s: string to be checked
 * @start:  beginning of num
 * @end: end of num
 * Return: 0
 */
int palindrome_checker(char *s, int start, int end);
int is_palindrome(char *s)
{
	return (palindrome_checker(s, 0, strlen(s) - 1));
}

/**
 * palindrome_checker - helps check each letter
 * @s: string to be checked
 * @start: start number
 * @end: end number
 * Return: 0
 */
int palindrome_checker(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}

	return (palindrome_checker(s, start + 1, end - 1));
}
