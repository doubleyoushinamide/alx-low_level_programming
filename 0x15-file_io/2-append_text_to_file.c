#include "main.h"

/**
 * append_text_to_file - appends text at the end of an existing file
 * @filename: the name of the file to append to
 * @text_content: the text to add to the file
 *
 * Return: 1 if successful, -1 if an error occurs or the file does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int written_bytes;

	if (!filename) {
		return -1;
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1) {
		return -1;
	}

	if (text_content) {
		for (nletters = 0; text_content[nletters]; nletters++);
		written_bytes = write(fd, text_content, nletters);

		if (written_bytes == -1) {
			return -1;
		}
	}

	close(fd);

	return 1;
}

