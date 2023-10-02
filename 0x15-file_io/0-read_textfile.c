#include "main.h"

/**
 * read_textfile - this functions reads a txt and print out as output
 * @filename: name of the txt file
 * @letters: lenght of characters in output from txt
 *
 * Return: returns character output and 0 if fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fie;
	ssize_t nrd, nch;
	char *buff;

	if (!filename)
		return (0);

	fie = open(filename, O_RDONLY);

	if (fie == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);

	nrd = read(fie, buff, letters);
	nch = write(STDOUT_FILENO, buff, nrd);

	close(fie);

	free(buff);

	return (nch);
}
