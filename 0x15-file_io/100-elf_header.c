#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>

#include "main.h"

void print_label(char *label);

/**
 * print_magic - prints the e_ident of the elf file
 * @buf: char buffer containing e_ident at offset 0
 * @size: size of e_ident
 * @filename: input file name
 */
void print_magic(const unsigned char *buf, unsigned int size, char *filename)
{
	unsigned int i = 0;

	for (; i < 4 ; i++)
	{
		if (buf[i] != ELFMAG[i])
		{
			dprintf(STDERR_FILENO, "%s is not a valid ELF\n", filename);
			exit(98);
		}
	}

	printf("  Magic:  ");
	for (i = 0 ; i < size ; i++)
		printf(" %02x", buf[i]);
	putchar('\n');
}

/**
 * print_class - prints the class of the elf file
 * @buf: char buffer containing e_ident at offset 0
 */
void print_class(const unsigned char *buf)
{
	print_label("Class");

	switch (buf[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("ELF NONE");
		break;
	case ELFCLASS32:
		printf("ELF32");
		break;
	case ELFCLASS64:
		printf("ELF64");
		break;
	case ELFCLASSNUM:
		printf("ELF NUM");
		break;
	default:
		printf("<unknown: %02u>", buf[EI_CLASS]);
	}
	putchar('\n');
}

/**
 * print_data - prints the data encoding of the elf file
 * @buf: char buffer containing e_ident at offset 0
 */
void print_data(const unsigned char *buf)
{
	print_label("Data");

	switch (buf[EI_DATA])
	{
	case ELFDATANONE:
		printf("none");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian");
		break;
	default:
		printf("<unknown: %02u>", buf[EI_DATA]);
	}
	putchar('\n');
}

/**
 * print_version - prints the version number of the elf file
 * @buf: char buffer containing e_ident at offset 0
 */
void print_version(const unsigned char *buf)
{
	print_label("Version");

	switch (buf[EI_VERSION])
	{
	case EV_NONE:
		printf("%u (none)", buf[EI_VERSION]);
		break;
	case EV_CURRENT:
		printf("%u (current)", buf[EI_VERSION]);
		break;
	case EV_NUM:
		printf("%u", buf[EI_VERSION]);
		break;
	default:
		printf("<unknown: %02u>", buf[EI_VERSION]);
	}
	putchar('\n');
}

/**
 * print_osabi - prints the version number of the elf file
 * @buf: char buffer containing e_ident at offset 0
 */
void print_osabi(const unsigned char *buf)
{
	print_label("OS/ABI");

	switch (buf[EI_OSABI])
	{
	case ELFOSABI_NONE || ELFOSABI_SYSV:
		printf("UNIX - System V");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64");
		break;
	case ELFOSABI_ARM:
		printf("UNIX - ARM");
		break;
	case ELFOSABI_STANDALONE:
		printf("Stand-alone (embedded)");
		break;
	default:
		printf("<unknown: %02u>", buf[EI_OSABI]);
	}
	putchar('\n');
}

/**
 * print_abi_version - prints the version number of the elf file
 * @buf: char buffer containing e_ident at offset 0
 */
void print_abi_version(const unsigned char *buf)
{
	print_label("ABI Version");

	printf("%u\n", buf[8]);

}

/**
 * print_type - prints the version number of the elf file
 * @buf: char buffer containing e_ident at offset 0
 */
void print_type(const unsigned char *buf)
{
	uint16_t *type = (uint16_t *) (buf + EI_NIDENT);

	print_label("Version");

	switch (*type)
	{
	case ET_NONE:
		printf("NONE (Unknown type)");
		break;
	case ET_REL:
		printf("REL (Relocatable file)");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)");
		break;
	case ET_CORE:
		printf("CORE (Core file)");
		break;
	default:
		printf("<unknown: %02u>", buf[EI_NIDENT]);
	}
	putchar('\n');
}

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
 * err_write - prints error message to stderr and exit with code 98
 */
void err_write(void)
{
	dprintf(STDERR_FILENO, "Error: Unknown error\n");
	exit(98);
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
		exit(98);
	}
}

/**
 * print_label - fill spaces starting at an index till index 34
 * @label: label to be printed
 */
void print_label(char *label)
{
	int len = 0;

	while (label[len])
		len++;
	printf("  %s:", label);
	for (len += 3 ; len < 37 ; len++)
		putchar(' ');
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
	int fd;
	unsigned char buf[EI_NIDENT + sizeof(uint16_t)];
	unsigned char e_entry_str[sizeof(Elf64_Addr)];

	Elf64_Addr __attribute__ ((unused)) *add64;
	Elf32_Addr __attribute__ ((unused)) *add32;

	if (ac != 2)
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", av[0]), exit(98);

	fd = open(av[1], O_RDONLY);
	if (fd < 0)
		err_read(av[1]);

	if (read(fd, buf, EI_NIDENT + sizeof(uint16_t)) !=
			(EI_NIDENT + sizeof(uint16_t)))
		err_read(av[1]);

	print_magic(buf, EI_NIDENT, av[1]);

	print_class(buf), print_data(buf), print_version(buf);
	print_osabi(buf), print_abi_version(buf), print_type(buf);

	if (lseek(fd, sizeof(uint16_t) + sizeof(uint32_t), SEEK_CUR) < 0)
		err_read(av[1]);

	if (read(fd, e_entry_str, sizeof(Elf64_Addr)) != sizeof(Elf64_Addr))
		err_read(av[1]);

	add64 = (Elf64_Addr *) e_entry_str, add32 = (Elf32_Addr *) e_entry_str;
	if (buf[EI_CLASS] == ELFCLASS32)
		print_label("Entry point address"), printf("%#x\n", *add32);
	if (buf[EI_CLASS] == ELFCLASS64)
		print_label("Entry point address"), printf("%#lx\n", *add64);

	f_close(fd);
	return (0);
}
