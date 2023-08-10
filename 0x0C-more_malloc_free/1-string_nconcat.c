#include <stdlib.h>
#include "main.h"

/**
 * _custom_memset - Fills memory with a specified value
 * @memory_area: Memory area to be filled
 * @value: Value to be copied
 * @length: Number of times to copy the value
 *
 * Return: Pointer to the memory area 'memory_area'
 */
char *_custom_memset(char *memory_area, char value, unsigned int length)
{
    unsigned int i;
    for (i = 0; i < length; i++)
    {
        memory_area[i] = value;
    }
    return (memory_area);
}

/**
 * _custom_calloc - Allocates memory for an array and initializes it to zero
 * @num_elements: Number of elements in the array
 * @element_size: Size of each element
 *
 * Return: Pointer to the allocated memory, or NULL if allocation fails
 */
void *_custom_calloc(unsigned int num_elements, unsigned int element_size)
{
    char *pointer;

    if (num_elements == 0 || element_size == 0)
        return (NULL);

    pointer = malloc(element_size * num_elements);

    if (pointer == NULL)
        return (NULL);

    _custom_memset(pointer, 0, num_elements * element_size);
    return (pointer);
}

