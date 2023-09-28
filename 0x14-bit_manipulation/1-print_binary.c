# include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary form
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp_num;
	int i;
	int count;

	for (i = 63; i >= 0; i--)
	{
		temp_num = n >> i;
		if (temp_num & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (n == 0)
		_putchar('0');
}
