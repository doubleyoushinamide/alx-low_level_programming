#include "main.h"

/**
 * read_textfile - reads a text file and prints the specified number of letters
 * @filename: the name of the file to read
 * @letters: the maximum number of letters to read and print
 *
 * Return: the number of letters printed, or 0 if an error occurs
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nread, nwritten;
	char *buffer;

	if (!filename) {
		return 0;
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1) {
		return 0;
	}

	buffer = malloc(sizeof(char) * letters);

	if (!buffer) {
		return 0;
	}

	nread = read(fd, buffer, letters);

	nwritten = write(STDOUT_FILENO, buffer, nread);

	close(fd);

	free(buffer);

	return nwritten;
}

