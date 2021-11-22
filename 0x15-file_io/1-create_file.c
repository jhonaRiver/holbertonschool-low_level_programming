#include "main.h"

/**
 * create_file - creates a file
 * @filename: file to create
 * @text_content: string to write to the file
 * Return: 1 success or -1 fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		write(fd, text_content, _strlen(text_content));
	}
	close(fd);
	return (1);
}

/**
 * _strlen - Returns the length of a string
 * @s: string to count
 * Return: s length
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count])
	{
		count++;
	}
	return (count);
}
