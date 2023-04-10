#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fn;
	ssize_t v;
	ssize_t t;

	fn = open(filename, O_RDONLY);
	if (fn == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(fn, buffer, letters);
	v = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fn);
	return (v);
}
