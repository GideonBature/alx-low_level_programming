#include <stdio.h>
/**
 * main - prints alphabets in lowercase, then uppercase
 * Return: 0
 */
int main(void)
{
	char lower_ch, upper_ch;

	lower_ch = 'a';
	upper_ch = 'A';

	while (lower_ch <= 'z')
	{
		putc(lower_ch, stdout);
		lower_ch++;
	}
	while (upper_ch <= 'Z')
	{
		putc(upper_ch, stdout);
		upper_ch++;
	}
	putc('\n', stdout);
	return (0);
}
