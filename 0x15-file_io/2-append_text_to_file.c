#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "main.h"

/**
 * append_text_to_file - ppends text at the end of a file
 * @filename: path of the file
 * @text_content: '\0' terminated string
 *
 * Return: (1) on success or (-1) on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
