void print_alphabet_x10(void);

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times
 */

void print_alphabet_x10(void)
{
	char lowAlpha = 'a';
	int i = 0;

	while (i < 10)
	{
		while (lowAlpha <= 'z')
		{
			_putchar(lowAlpha);
			lowAlpha++;
		}
		_putchar('\n');
		i++;
	}
}
