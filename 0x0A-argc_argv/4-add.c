#include "main.h"

/**
 * main - adds positive numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 success or 1 error
 */

int main(int argc, char **argv)
{
	int i, num, result = 0;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
