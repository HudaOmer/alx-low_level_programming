#include "main.h"

/**
 * set_string - change pointer
 * @s: pointer of pointer of array
 * @to: pointer of array
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
