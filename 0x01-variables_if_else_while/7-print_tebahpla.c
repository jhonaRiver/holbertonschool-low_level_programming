#include <stdio.h>

/**
 * Prints the lowercase alphabet in reverse.
 */

int main(void)
{
	char lowerAlpha = 'z';

	while (lowerAlpha >= 'a')
	{
		putchar(lowerAlpha);
		lowerAlpha--;
	}
	putchar('\n');
	return (0);
}
