#include "main.h"
/**
*print_alphabet_x10 - prints alphabet letters
* ten times
*desc: The function uses loop to operate
*Return: no return
*/

void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
