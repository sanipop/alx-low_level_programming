#include "main.h"
/**
 * append_text_to_file – add text at the end of the page.
 * @filename: Aname of the file in the program.
 * @text_content: Content to add to file
 *
 * Return: On fail or filename is NULL - -1.
 * And if it does not exist the users - -1.
 * Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
        int outt, wri, leng = 0;
        if (filename == NULL)
                return (-1);
        if (text_content != NULL)
        {
                for (leng = 0; text_content[leng];)
                        leng++;
        }
        outt = open(filename, O_WRONLY | O_APPEND);
        wri = write(outt, text_content, leng);
        if (outt == -1 || wri == -1)
                return (-1);
        close(outt);
        return (1);
}

