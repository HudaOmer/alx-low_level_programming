#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: input string.
 * Return: the pointer to dest.
 */

char *string_toupper(char *s)
{
    int count = 0;
    while (n[count] != '\0')
    {
        if (s[count] >= 'a' && s[count] <= 'z')
            n[count] = n[count] - 32;
        count++;
    }
    return (n);
}
