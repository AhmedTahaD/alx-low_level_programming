#include <stdio.h>
/**
 *main - fizz buzz
 *Return: always 0
 */

int main(void)
{
	int number;

	number = 0;
	while (number++ < 100)
	{
		if (((number % 3) == 0) && ((number % 5) == 0))
		{
			printf("FizzBizz");
		}
		else if ((number % 5) == 0)
		{
			printf("Buzz");
		}
		else if ((number % 3) == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", number);
		}
		if (number != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
