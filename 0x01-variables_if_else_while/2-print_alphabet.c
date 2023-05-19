#include <stdio.h>
/**
 * main - prints alphabets in small letters
 * Return: 0
 */
int main(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		putc(ch, stdout);
		ch++;
	}
	putc('\n', stdout);
	return (0);
}
