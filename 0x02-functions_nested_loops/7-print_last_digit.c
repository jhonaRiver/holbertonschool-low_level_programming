#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @num: input character to be checked
 *
 * Return: Returns the value of the last digit
 */

int print_last_digit(int num)
{
	int lastDigit;

	lastDigit = num % 10;
	_putchar(lastDigit);
	return (lastDigit);
}
