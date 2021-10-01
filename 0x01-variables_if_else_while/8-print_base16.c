#include <stdio.h>

/**
 * Prints all the numbers of base 16 in lowercase.
 */

int main(void)
{
	int num = '0';
	char lowerAlpha = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (lowerAlpha <= 'f')
	{
		putchar(lowerAlpha);
		lowerAlpha++;
	}
	putchar('\n');
	return (0);
}
