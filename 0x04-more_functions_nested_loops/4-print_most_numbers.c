#include "main.h"
/**
 * print_most_numbers - function prints the numbers from 0 to 9
 * exepect 2 & 4
 * Return: returns 0
 */
void print_most_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		if (number == 2 || number == 4)
		{
			continue;
		}
		_putchar('0' + number);
	}
	_putchar('\n');
}
