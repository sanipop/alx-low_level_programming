#include "main.h"
/**
 * create_file – To Create a File.
 * @filename: Name to reference the file in the program.
 * @text_content: Buffer of characters
 *
 * Return: With Failure return- -1.
 *  And Otherwise - 1.
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
