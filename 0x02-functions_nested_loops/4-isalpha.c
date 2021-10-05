int _isalpha(int c);

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: input character to be checked
 *
 * Return: 1 if c is a letter or 0 otherwise
 */

int _isalpha(int c)
{
	int alpha;

	if (c >= 65 || c <= 90 || c >= 97 || c <= 122)
	{
		alpha = 1;
	}
	else
	{
		alpha = 0;
	}
	return (alpha);
}
