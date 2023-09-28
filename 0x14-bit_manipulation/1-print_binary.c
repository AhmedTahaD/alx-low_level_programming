# include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary form
 */
void print_binary(unsigned long int n)
{
	int temp_num = n;
	int i;
	char binary_digit[32];
	int j;

	if (temp_num == 0)
		_putchar('0');
	for (i = 0; temp_num > 0; i++)
	{
		binary_digit[i] = temp_num % 2;
		temp_num = temp_num / 2;
	}
	for (j = (i - 1); j >= 0; j--)
		_putchar(binary_digit[j] + '0');
}
