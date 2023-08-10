#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"

/**
 * has_non_digit - checks if a string contains a non-digit character
 * @str: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int has_non_digit(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9')
            return 0;
        i++;
    }
    return 1;
}

/**
 * custom_strlen - returns the length of a string
 * @str: string to evaluate
 *
 * Return: the length of the string
 */
int custom_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

/**
 * handle_errors - handles errors for the main function
 */
void handle_errors(void)
{
    printf("Error\n");
    exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
    char *str1, *str2;
    int len1, len2, len, i, carry, digit1, digit2, *result, has_value = 0;
    str1 = argv[1];
    str2 = argv[2];
    if (argc != 3 || !has_non_digit(str1) || !has_non_digit(str2))
        handle_errors();
    len1 = custom_strlen(str1);
    len2 = custom_strlen(str2);
    len = len1 + len2 + 1;
    result = malloc(sizeof(int) * len);
    if (!result)
        return 1;
    for (i = 0; i <= len1 + len2; i++)
        result[i] = 0;
    for (len1 = len1 - 1; len1 >= 0; len1--)
    {
        digit1 = str1[len1] - '0';
        carry = 0;
        for (len2 = custom_strlen(str2) - 1; len2 >= 0; len2--)
        {
            digit2 = str2[len2] - '0';
            carry += result[len1 + len2 + 1] + (digit1 * digit2);
            result[len1 + len2 + 1] = carry % 10;
            carry /= 10;
        }
        if (carry > 0)
            result[len1 + len2 + 1] += carry;
    }
    for (i = 0; i < len - 1; i++)
    {
        if (result[i])
            has_value = 1;
        if (has_value)
            _putchar(result[i] + '0');
    }
    if (!has_value)
        _putchar('0');
    _putchar('\n');
    free(result);
    return 0;
}

