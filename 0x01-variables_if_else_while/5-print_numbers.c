#include <stdio.h>

/*
 * Prints all single digit numbers of base 10 starting from 0
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%i", num);
		num++;
	}
	printf("\n");
	return (0);
}
