#include "main.h"

/**
 * read_textfile - Read a text file and print to POSIX stdout
 * @filename: char string of files name
 * @letters: number of letters to read and print
 * Return: number of letters read and printed, or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int d;
	ssize_t acount, bcount;
	char *buffer;

	if (filename == NULL)
		return (0);

	d = open(filename, O_RDWR);
	if (d == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	acount = read(d, buffer, letters);
	if (acount == -1)
		return (0);

	bcount = write(STDOUT_FILENO, buffer, acount);
	if (bcount == -1 || acount != bcount)
		return (0);
	free(buffer);

	close(d);
	return (bcount);
}
