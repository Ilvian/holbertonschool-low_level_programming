#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: input
 * @text_content: input
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);

	if (filename == NULL)
	{
		return (-1);
	}
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		ssize_t write_res = write(fd, text_content, strlen(text_content));

		if (write_res == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
