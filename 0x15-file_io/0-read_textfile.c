#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: pointer to the file name
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd, r, w;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters);
	if (buf == NULL)
		return (0);

	r =  read(fd, buf, letters);
	if (r == -1)
	{
		free(buf);
		return (0);
	}
	w = write(STDOUT_FILENO, buf, r);
	if (w == -1 || w != r)
	{
		free(buf);
		return (0);
	}
	free(buf)
		close(fd);
	return (r);
}

