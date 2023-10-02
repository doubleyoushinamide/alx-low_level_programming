#include "main.h"

/**
 * create_file - function that crates a file
 * @filename: filename to write for the file
 * @text_content: arg texts to write into the file
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fie;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	fie = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fie == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwr = write(fie, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(fie);

	return (1);
}
