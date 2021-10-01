#include <stdio.h>

/*
 * Prints the alphabet in lowercase except the letters q and e.
 */

int main(void)
{
	char lowerAlpha = 'a';
	while (lowerAlpha <= 'z')
	{
		if(lowerAlpha != 'e' && lowerAlpha != 'q')
			putchar(lowerAlpha);
		lowerAlpha++;
	}
	putchar('\n');
	return (0);
}
