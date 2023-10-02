#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- Read a text and output to STDOUT.
 * @filename: the input text
 * @letters: count of input
 * Return: w- count of the number
 * 0 with failure or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t filed;
	ssize_t wr;
	ssize_t tx;
	filed = open(filename, O_RDONLY);
	if (filed == -1)
	return (0);
	buffer = malloc(sizeof(char) * letters);
	tx = read(filed, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, tx);
	free(buffer);
	close(filed);
	return (wr);
}

