#include <stdio.h>
#include "main.h"
#define FILE_NAME __FILE__

/**
 * main - Entry point of the program
 *
 * Description: This function prints the name of file it was compiled from
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("%s\n", FILE_NAME);

	return (0);
}
