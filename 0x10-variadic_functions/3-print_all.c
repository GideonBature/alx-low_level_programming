#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_char - prints character
 * @arg: argument
 * Return: void
*/
void print_char(va_list arg)
{
	printf("%c", (unsigned char) va_arg(arg, int));
}

/**
 * print_int - prints integer
 * @arg: argument
 * Return: void
*/
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_float - prints float
 * @arg: argument
 * Return: void
*/
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_str - prints string
 * @arg: argument
 * Return: void
*/
void print_str(va_list arg)
{
	char *string = va_arg(arg, char *);

	if (!string)
	{
		string = "(nil)";
	}
	printf("%s", string);
}

/**
 * print_all - prints based on format
 * @format: specifies what to print
 * Return: void
*/
void print_all(const char * const format, ...)
{
	va_list arg;

	int i = 0, j;

	char *seperator = "";

	print_t print_func[] = {
		{ 'c', print_char },
		{ 'i', print_int },
		{ 'f', print_float },
		{ 's', print_str },
	};

	va_start(arg, format);

	while (format && format[i])
	{
		j = 0;

		while (j < 4)
		{
			if (format[i] == print_func[j].alphabet)
			{
				printf("%s", seperator);
				print_func[j].print(arg);
				seperator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
}
