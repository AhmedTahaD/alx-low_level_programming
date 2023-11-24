#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 * Return: the converted integr number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int int_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		int_val = 2 * int_val + (b[i] - '0');
	}

	return (int_val);
}
