#include <stdlib.h>
#include "main.h"

/**
 * custom_memset - Fills memory with a constant byte
 * @memory_area: Memory area to be filled
 * @byte_value: Byte value to copy
 * @length: Number of times to copy byte_value
 *
 * Return: Pointer to the memory area 'memory_area'
 */
char *custom_memset(char *memory_area, char byte_value, unsigned int length)
{
    unsigned int i;
    for (i = 0; i < length; i++)
    {
        memory_area[i] = byte_value;
    }
    return memory_area;
}

/**
 * custom_calloc - Allocates memory for an array and initializes it to zero
 * @num_elements: Number of elements in the array
 * @element_size: Size of each element
 *
 * Return: Pointer to the allocated memory, or NULL if allocation fails
 */
void *custom_calloc(unsigned int num_elements, unsigned int element_size)
{
    char *allocated_ptr;

    if (num_elements == 0 || element_size == 0)
        return NULL;

    allocated_ptr = malloc(element_size * num_elements);

    if (allocated_ptr == NULL)
        return NULL;

    custom_memset(allocated_ptr, 0, num_elements * element_size);
    return allocated_ptr;
}

