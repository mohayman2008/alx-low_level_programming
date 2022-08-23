#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "main.h"

/**
 * err_read - prints error message to stderr and exit with code 98
 * @filename: input file name
 */
void err_read(const char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}

/**
 * err_write - prints error message to stderr and exit with code 99
 * @filename: output file name
 */
void err_write(const char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}

/**
 * f_close - closes an opened file
 * @fd: file descriptor
 */
void f_close(int fd)
{
	if (close(fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 * @ac: argunments count
 * @av: arguments vector
 *
 * Return: 0 Always
 */
int main(int ac, char **av)
{
	int fd_s, fd_d, rd_count = 1;
	char buf[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_d = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_d < 0)
		err_write(av[2]);

	fd_s = open(av[1], O_RDONLY);
	if (fd_s < 0)
		f_close(fd_d), err_read(av[1]);

	while (rd_count)
	{
		rd_count = read(fd_s, buf, 1024);
		if (rd_count < 1024 && read(fd_s, buf + rd_count, 1))
			f_close(fd_d), f_close(fd_s), err_read(av[1]);

		if (write(fd_d, buf, rd_count) != rd_count)
			f_close(fd_d), f_close(fd_s), err_write(av[2]);
	}

	f_close(fd_d), f_close(fd_s);
	return (0);
}
