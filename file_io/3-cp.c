#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 *	main - The main Function that copy one file to another new one.
 *	@argc: Arguments counter.
 *	@argv: Vector of arguments.
 *	Return: The corresponding exit error or Success value (1).
 */

int main(int argc, char *argv[])
{
	int fd1, fd2, w, r;
	char buff[10000], *file_f, *file_t;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_f = argv[1];
	file_t = argv[2];

	fd1 = open(file_f, O_RDONLY);
	fd2 = open(file_t, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_f);
		exit(98);
	}
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_t);
		close(fd1);
		exit(99);
	}
	while ((r = read(fd1, buff, sizeof(buff))) > 0)
	{
		w = write(fd2, buff, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_t);
			close(fd1);
			close(fd2);
			exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_f);
		close(fd1);
		close(fd2);
		exit(98);
	}
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd2);
		exit(100);
	}
	return (0);
}
