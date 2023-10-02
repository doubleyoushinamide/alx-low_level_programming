#include "main.h"

/**
 i* append_text_to_file - this function appends a text char to eof
 * @filename:name of txt or bin file
 * @text_content: characters to append
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fie;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	fie = open(filename, O_WRONLY | O_APPEND);

	if (fie == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(fie, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(fie);

	return (1);
}
