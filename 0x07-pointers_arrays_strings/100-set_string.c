#include "main.h"
#include <stdio.h>
/**
 * set_string - sets value of a pointer to a char
 * @s: original text
 * @to: test to be changed
 */
void set_string(char **s, char *to)
{
	*s = to;
}
