#include "main.h"
#include <string.h>
/**
 * append_text_to_file - function that appends text at the end of a file
 *
 * @filename: pointer to the file name
 * @text_content: pointer to a NULL terminated string
 * to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		w = write(fd, text_content, strlen(text_content));
		if (w == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
