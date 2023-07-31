#include "main.h"

/**
 *	read_textfile - reads a text file and prints it to the standar output
 *	@filename: the pointer to the file
 *	@letters: the number of leters to be read and print
 *	Return: the actual number of letters it should read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buf[10000];
	ssize_t real_read;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	real_read = read(fd, buf, letters);
	write(STDOUT_FILENO, buf, letters);
	close(fd);
	return (real_read);
}
