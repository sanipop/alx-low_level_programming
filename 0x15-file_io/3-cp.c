#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *create_buffer(char *file);
void close_file(int fd);
/**
 * create_buffer – create a buffer for file.
 * @file: Name of file to write to.
 *
 * Return: Output to a new pointer.
 */
char *create_buffer(char *file)
{
        char *buff_er;
        buff_er = malloc(sizeof(char) * 1024);
        if (buff_er == NULL)
        {
                dprintf(STDERR_FILENO,
                        "Error: Can't write to %s\n", file);
                exit(99);
        }
        return (buff_er);
}
/**
 * close_file – Fxn to close the file.
 * @fd: input To be closed.
 */
void close_file(int filed)
{
        int x;
        x = close(filed);
        if (x == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filed);
                exit(100);
        }
}
/**
 * main – Duplicate content to new file.
 * @argc: argument count from terminal .
 * @argv: Input from terminal.
 *
 * Return: output 0 on success
 *
 * Description: exit code 97 with error.
 * exit code 98 if file source does not exist.
 * exit code 99 with failure to create.
 * exit code 100 if either file cannot be closed.
 */
int main(int argc, char *argv[])
{
        int a, z, r, w;
        char * buff_er;
        if (argc != 3)
        {
                dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
                exit(97);
        }
        buff_er = create_ buff_er (argv[2]);
        a = open(argv[1], O_RDONLY);
        r = read(a, buff_er, 1024);
        z = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
        do {
                if (a == -1 || r == -1)
                {
                        dprintf(STDERR_FILENO,
                                "Error: Can't read from file %s\n", argv[1]);
                        free(buff_er);
                        exit(98);
                }
                w = write(z, buff_er, r);
                if (z == -1 || w == -1)
                {
                        dprintf(STDERR_FILENO,
                                "Error: Can't write to %s\n", argv[2]);
                        free(buff_er);
                        exit(99);
                }
                r = read(a, buff_er, 1024);
                z = open(argv[2], O_WRONLY | O_APPEND);
        } while (r > 0);
        free(buff_er);
        close_file(a);
        close_file(z);
        return (0);
}

