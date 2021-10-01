#include <stdio.h>

/*
 * Prints the alphabet in lowercase
 */

int main(void)
{
	char lowAlpha = 'a';
	while (lowAlpha <= 'z')
	{
		putchar(lowAlpha);
		lowAlpha++;
	}
	putchar('\n');
	return (0);
}
