#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from on number to another
 * @n: number to be flipped
 * @m: target number
 * Return: number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int bit_count = 0;
	unsigned long int bit;
	unsigned long int temp = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		bit = temp >> i;
		if (bit & 1)
			bit_count++;
	}
	return (bit_count);
}
