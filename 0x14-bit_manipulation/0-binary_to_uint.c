#include "main.h"
/**
 * binary_to_uint - converts binary number to intger
 * @b: pionter to binary number to be converted.
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	int converted_num = 0;

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		converted_num = 2 * converted_num + (b[i] - '0');
	}
	return (converted_num);
}
