#include "main.h"
/**
* print_number - Prints a number
* @n: The number to print
*
*/
void print_number(int n)
{
	unsigned int number;

	number = n;
	if (n < 0)
	{
		_putchar('-');
		number = -number;
	}
	if (number > 9)
	{
		print_number(number / 10);
	}
	_putchar((number % 10) + '0');
}
