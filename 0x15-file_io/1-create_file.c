#include "main.h"

/**
 * create_file - creates a new file with the given name and writes text to it
 * @filename: the name of the file to create
 * @text_content: the text to write to the file
 *
 * Return: 1 if successful, -1 if an error occurs
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int written_bytes;

	if (!filename) {
		return -1;
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1) {
		return -1;
	}

	if (!text_content) {
		text_content = "";
	}

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	written_bytes = write(fd, text_content, nletters);

	if (written_bytes == -1) {
		return -1;
	}

	close(fd);

	return 1;
}

