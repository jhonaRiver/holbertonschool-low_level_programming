#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to convert
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	_divide(n);
}

/**
 * _divide - divides the number to convert it to binary
 * @n: number to convert
 */
void _divide(unsigned long int n)
{
	if (n < 1)
	{
		return;
	}
	_divide(n >> 1);
	if (n & 1)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}
