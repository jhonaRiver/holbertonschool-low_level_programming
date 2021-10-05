int _abs(int);

/**
 * _abs - Computes the absolute value of an integer
 *
 * @num: input character to compute absolute value
 *
 * Return: Returns the absolute value of the integer
 */

int _abs(int num)
{
	if (num < 0)
	{
		num *= -1;
	}
	return (num);
}
