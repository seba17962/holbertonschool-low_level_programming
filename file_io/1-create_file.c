#include "main.h"

/**
 *	create_file - create a file
 *	@filename: a pointer to the file
 *	@text_content: a pointer to a file with the content of the new file
 *	Return: 1 on success, -1 it is file
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
		if (fd == -1)
			return (-1);
		close(fd);
		return (1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd == -1)
		return (-1);

	/**
	 * r = read(fd, text_content, strlen(text_content));
	*if (r == -1)
	*	return (-1);
*/
	w = write(fd, text_content, strlen(text_content));
	if (w == -1)
		return (-1);

	close(fd);
	return (1);
}
