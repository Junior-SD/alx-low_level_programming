#include "main.h"

/**
 * create_file - Will create a file
 * @filename: The file name
 * @text_content: Content written in the file
 *
 * Return: 1 for a successfull prog run, otherwise -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int lwr;
	int numltrs;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (numltrs = 0; text_content[numltrs]; numltrs++)
		;
	lwr = write(fd, text_content, numltrs);

	if (lwr == -1)
		return (-1);
	close(fd);

	return (1);
}
