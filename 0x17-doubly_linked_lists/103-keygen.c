#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - keygen program of crackme5
 *
 * @ac: argc
 * @av: arguments , only 1: username
 * Return: 0 on Success
 */
int main(int ac, char **av)
{
	char *s = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char key[7];
	int len, i, tmp = 0, var = 1, seed, uVar1;
	(void) ac;

	len = strlen(av[1]);
	key[6] = '\0';
	key[0] = s[(len ^ 0x3b) & 0x3f];
	for (i = 0; i < len; i++)
		tmp = tmp + av[1][i];
	key[1] = s[(tmp ^ 0x4f) & 0x3f];
	for (i = 0; i < len; i++)
		var = av[1][i] * var;
	key[2] = s[(var ^ 0x55) & 0x3f];
	seed = av[1][0];
	for (i = 0; i < len; i = i + 1)
	{
		if (seed < av[1][i])
			seed = av[1][i];
	}
	srand(seed ^ 0xe);
	key[3] = s[rand() & 0x3f];
	uVar1 = 0;
	for (i = 0; i < len; i = i + 1)
		uVar1 = uVar1 + av[1][i] * av[1][i];
	key[4] = s[(uVar1 ^ 0xef) & 0x3f];
	for (i = 0; i < av[1][0]; i = i + 1)
		uVar1 = rand();
	key[5] = s[(uVar1 ^ 0xe5) & 0x3f];
	for (i = 0; key[i]; i++)
		printf("%c", key[i]);
	return (0);
}
