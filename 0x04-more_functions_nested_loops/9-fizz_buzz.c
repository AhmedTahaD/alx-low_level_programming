#include <stdio.h>
/**
 *main - fizz buzz
 *Return: always 0
 */

int main(void)
{
	int number;

	while (number++ < 100)
	{
		if ((number % 15) == 0)
		{
			printf("FizzBizz ");
		}
		else if ((number % 5) == 0)
		{
			printf("Buzz ");
		}
		else if ((number % 3) == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", number);
		}
	}
	printf("\n");
	return (0);
}
