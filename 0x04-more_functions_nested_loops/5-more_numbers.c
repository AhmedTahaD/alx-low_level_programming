#include "main.h"
/**
 * more_numbers - function print numbers from 0>14
 * 10 times
 */
void more_numbers(void)
{
	int iteration;
	int number;

	for (iteration = 0; iteration <= 9; iteration++)
	{
		for (number = 0; number <= 14; number++)
		{
			_putchar('0' + number);
		}
		_putchar('\n');
	}
}
