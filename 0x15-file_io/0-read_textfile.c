#include "main.h"

/**
 * read_textfile - reads text from a file and prints it
 * @filename: name of file to read
 * @letters: number of bytes to read
 *
 * Return: number bytes read/printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_writen;
	char buf[READ_BUF_SIZE];

	if (!filename || !letters)
		return (-1);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (-1);

	bytes_read = read(fd, buf, letters);
	if (bytes_read == -1)
	{
		close(fd);
		return (-1);
	}

	bytes_writen  = write(STDOUT_FILENO, buf, bytes_read);
	if (bytes_writen == -1)
	{
	close(fd);
	return (-1);
	}

	close(fd);
	return (bytes_read);
}
