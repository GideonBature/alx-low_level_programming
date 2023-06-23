#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string printed before string
 * @n: number of strings passed
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;

	unsigned int i;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		if (va_arg(str, char *) == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", va_arg(str, char *));
		}

		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(str);
}

