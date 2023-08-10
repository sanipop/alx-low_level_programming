#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat_custom - Concatenates n bytes of one string to another string
 * @first_str: String to append to
 * @second_str: String to concatenate from
 * @num_bytes: Number of bytes from second_str to concatenate to first_str
 *
 * Return: Pointer to the resulting string, or NULL if allocation fails
 */
char *string_nconcat_custom(char *first_str, char *second_str, unsigned int num_bytes)
{
    char *result; 
    unsigned int i = 0, j = 0, len_first = 0, len_second = 0;

    while (first_str && first_str[len_first])
        len_first++;
    while (second_str && second_str[len_second])
        len_second++;

    if (num_bytes < len_second)
        result = malloc(sizeof(char) * (len_first + num_bytes + 1));
    else
        result = malloc(sizeof(char) * (len_first + len_second + 1));

    if (!result)
        return (NULL);

    for (; i < len_first; i++)
        result[i] = first_str[i];

    while (num_bytes < len_second && i < (len_first + num_bytes))
        result[i++] = second_str[j++];

    while (num_bytes >= len_second && i < (len_first + len_second))
        result[i++] = second_str[j++];

    result[i] = '\0';
    return (result);
}

