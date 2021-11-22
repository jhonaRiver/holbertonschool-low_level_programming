#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to read
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print or 0 if fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, letters_read;
	char *buff = malloc(sizeof(char *) * letters);

	if (!buff)
		return (0);
	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);
	letters_read = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, letters_read);
	free(buff);
	close(fd);
	return (letters_read);
}
