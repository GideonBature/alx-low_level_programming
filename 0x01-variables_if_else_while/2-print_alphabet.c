#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Error)
*/

int main(void)
{
	char ch;

	// loop through the lowercase alphabet a to z
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n'); //print a newline character
	return 0;
}
