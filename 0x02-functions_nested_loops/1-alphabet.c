void print_alphabet(void);

/**
 * print_alphabet - Prints the alphabet in lowercase
 */

void print_alphabet(void)
{
	char lowAlpha = 'a';

	while (lowAlpha <= 'z')
	{
		_putchar(lowAlpha);
		lowAlpha++;
	}
	_putchar('\n');
}
