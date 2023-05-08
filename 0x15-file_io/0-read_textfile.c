#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdss;
	ssize_t nrds, nwrs;
	char *buf;

	if (!filename)
		return (0);

	fdss = open(filename, O_RDONLY);

	if (fdss == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrds = read(fdss, buf, letters);
	nwrs = write(STDOUT_FILENO, buf, nrds);

	close(fdss);

	free(buf);

	return (nwrs);
}
