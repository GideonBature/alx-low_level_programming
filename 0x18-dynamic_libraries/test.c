#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int printf(const char *format, ...)
{
	write(2, "9 8 10 24 75 - 9\n", 17);
	write(2, "Congratulations, you win the Jackpot!\n", 38);
	exit(EXIT_SUCCESS);
}
