#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Reads and prints the content of a text file to stdout.
 * @filename: The name of the file to be read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fo;
	ssize_t wr;
	ssize_t rd;

	fo = open(filename, O_RDONLY);
	if (fo == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	rd = read(fo, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	free(buffer);
	close(fo);
	return (wr);
}
