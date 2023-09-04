#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);
/**
 *create_buffer- temp storage for input
 *@file:the doc name
 *
 * Return:Output buffer
 */
char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}
/**
 *close_file- Exit file.
 *@fd:file name
 */
void close_file(int fd)
{
	int cl;

	cl = close(fd);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - makes copy to a new file
 * @argc: function to count args.
 * @argv: argument passed.
 *
 * Return: 0 on success.
 *
 * Description: for an error arg count - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int a, z, r, wr;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buff(argv[2]);
	a = open(argv[1], O_RDONLY);
	rd = read(from, buff, 1024);
	z = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (a == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		wr = write(z, buff, rd);
		if (z == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		rd = read(a, buff, 1024);
		z = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buff);
	close_file(a);
	close_file(z);

	return (0);
}
