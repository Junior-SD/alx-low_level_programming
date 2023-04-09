#include "main.h"

/**
 * read_textfile - will read a text file and print the letters
 * @filename: The file name
 * @letters: The number of letters printed
 *
 * Return: The number of letters printed, otherwise 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t lrd, lwr;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	lrd = read(fd, buffer, letters);
	lwr = write(STDOUT_FILENO, buffer, lrd);

	close(fd);

	free(buffer);

	return (lwr);
}
