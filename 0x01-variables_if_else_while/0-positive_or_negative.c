#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 *main - Entry point
 *Return: Always 0 (Error)
*/

/* betty style doc for function main goes there */

/**
 * This function takes in a random number
 * check if the number is positive, negative or zero
 * then prints it out accordingly
*/

int main(void)
{
	int n;

	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n == 0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("is negative\n");
	}

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
