#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: path to the text file
 * @letters: number of letters to read and print
 *
 * Return: the actual number of letters read and printed or (0) on error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t count = 0;
	int fd, to_read, rd_count;
	char buf[1024];

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	while (count < letters)
	{
		to_read = (letters - count) < 1024 ? (letters - count) : 1024;

		rd_count = read(fd, buf, to_read);
		if (rd_count < to_read && read(fd, buf + rd_count, 1))
			return (0);

		if (write(STDOUT_FILENO, buf, rd_count) != rd_count)
			return (0);

		count += rd_count;
		if (rd_count < to_read)
			break;
	}
	write(STDOUT_FILENO, "\0", 1);

	close(fd);
	return (count);
}
