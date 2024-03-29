#include "function_pointers.h"
#include <stdlib.h>
#include <string.h>
/**
 * print_name - prints a name
 * @name: string
 * @f: function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
