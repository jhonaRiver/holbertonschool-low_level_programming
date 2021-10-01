#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * Prints whether a random number is positive or negative.
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf(n, " is positive");
	else if (n < 0)
		printf(n, " is negative");
	else
		printf(n, " is zero");
	return (0);
}
