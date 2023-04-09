#include "main.h"

/**
 * append_text_to_file - will append text at the end of a file
 * @filename: The file name
 * @text_content: Added content
 *
 * Return: 1 if file is present otherwise -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int numltrs;
	int lwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (numltrs = 0; text_content[numltrs]; numltrs++)
			;
		lwr = write(fd, text_content, numltrs);

		if (lwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
