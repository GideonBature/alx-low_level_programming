#include <stdio.h>
/**
 * main - prints all alphabets except q and e
 * Return: 0
 */
int main(void)
{
	char ch;

	ch = 'a';

	if ((ch != 'q') && (ch != 'e'))
	{
		while (ch <= 'z')
		{
			putchar(ch);
			ch++;
		}
	}
	putchar('\n');
	return (0);
}
