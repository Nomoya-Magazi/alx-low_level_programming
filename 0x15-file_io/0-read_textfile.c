#include "main.h"
/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: the pointer to the file
 * @letters: the characters of the files
 * Return:the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, l, i;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
	{
		return (0);
	}

	if (!filename)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	{
		if (fd == -1)
		{
			return (0);
		}
	}
	l = read(fd, buffer, letters);
	{
		if (l == -1)
		{
			return (0);
		}
	}
	i = write(STDOUT_FILENO, buffer, l);
	{
		if (i == -1)
		{
			return (0);
		}
	}
	close(fd);
	free(buffer);

	return (i);
}
