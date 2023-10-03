#include "main.h"
/**
 * create_file - Creates a file fo the Program.
 * @filename: String of the file to be edited.
 * @text_content: the string that will be writen to the txt file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int filed, w, leng = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
	for (leng = 0; text_content[leng];)
		leng++;
	}
	 filed = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(filed, text_content, leng);
	if (filed == -1 || w == -1)
		return (-1);
	close(filed);
	return (1);
}
