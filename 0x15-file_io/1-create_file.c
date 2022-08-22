#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "main.h"

/**
 * create_file - creates a file and writes to it
 * @filename: path of the new file
 * @text_content: '\0' terminated string
 *
 * Return: (1) on success or (-1) on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[len])
			len++;
		if (write(fd, text_content, len) != len)
			return (-1);
	}

	close(fd);
	return (1);
}
