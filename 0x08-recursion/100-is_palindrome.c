0x08. C - Recursion
README.md


Project

0x08. C - Recursion





































main.h


#ifndef MAIN_H

#define MAIN_H


void _puts_recursion(char *s);

int _putchar(char c);

void _print_rev_recursion(char *s);

int _strlen_recursion(char *s);

int factorial(int n);

int _pow_recursion(int x, int y);

int _sqrt_recursion(int n);

int is_prime_number(int n);

int is_palindrome(char *s);

#endif


























_putchar.c


#include "main.h"

#include <unistd.h>

/**

 * _putchar - writes the character c to stdout

 * @c: The character to print

 *

 * Return: On success 1.

 * On error, -1 is returned, and errno is set appropriately.

 */

int _putchar(char c)

{

        return (write(1, &c, 1));

}


























0-puts_recursion.c


#include "main.h"

/**

 * _puts_recursion - function like puts();

 * @s: input

 * Return: Always 0 (Success)

 */

void _puts_recursion(char *s)

{

        if (*s)

        {

                _putchar(*s);

                _puts_recursion(s + 1);

        }


        else

                _putchar('\n');

}






















1-print_rev_recursion.c


#include "main.h"

/**

 * _print_rev_recursion - Prints a string in reverse.

 * @s: The string to be printed.

 */

void _print_rev_recursion(char *s)

{

        if (*s)

        {

                _print_rev_recursion(s + 1);

                _putchar(*s);

        }

}


























2-strlen_recursion.c


#include "main.h"

/**

 * _strlen_recursion - Returns the length of a string.

 * @s: The string to be measured.

 *

 * Return: The length of the string.

 */

int _strlen_recursion(char *s)

{

        int longit = 0;


        if (*s)

        {

                longit++;

                longit += _strlen_recursion(s + 1);

        }


        return (longit);

}




















3-factorial.c


#include "main.h"


/**

 * factorial - returns the factorial of a number

 * @n: number to return the factorial from

 *

 * Return: factorial of n

 */

int factorial(int n)

{

        if (n < 0)

                return (-1);

        if (n == 0)

                return (1);

        return (n * factorial(n - 1));

}























4-pow_recursion.c


#include "main.h"


/**

 * _pow_recursion - returns the value of x raised to the power of y

 * @x: value to raise

 * @y: power

 *

 * Return: result of the power

 */

int _pow_recursion(int x, int y)

{

        if (y < 0)

                return (-1);

        if (y == 0)

                return (1);

        return (x * _pow_recursion(x, y - 1));

}






















5-sqrt_recursion.c


#include "main.h"


int actual_sqrt_recursion(int n, int i);


/**

 * _sqrt_recursion - returns the natural square root of a number

 * @n: number to calculate the square root of

 *

 * Return: the resulting square root

 */

int _sqrt_recursion(int n)

{

        if (n < 0)

                return (-1);

        return (actual_sqrt_recursion(n, 0));

}


/**

 * actual_sqrt_recursion - recurses to find the natural

 * square root of a number

 * @n: number to calculate the sqaure root of

 * @i: iterator

 *

 * Return: the resulting square root

 */

int actual_sqrt_recursion(int n, int i)

{

        if (i * i > n)

                return (-1);

        if (i * i == n)

                return (i);

        return (actual_sqrt_recursion(n, i + 1));

}






6-is_prime_number.c


#include "main.h"


int actual_prime(int n, int i);


/**

 * is_prime_number - says if an integer is a prime number or not

 * @n: number to evaluate

 *

 * Return: 1 if n is a prime number, 0 if not

 */

int is_prime_number(int n)

{

        if (n <= 1)

                return (0);

        return (actual_prime(n, n - 1));

}


/**

 * actual_prime - calculates if a number is prime recursively

 * @n: number to evaluate

 * @i: iterator

 *

 * Return: 1 if n is prime, 0 if not

 */

int actual_prime(int n, int i)

{

        if (i == 1)

                return (1);

        if (n % i == 0 && i > 0)

                return (0);

        return (actual_prime(n, i - 1));

}







100-is_palindrome.c


#include "main.h"


int check_pal(char *s, int i, int len);

int _strlen_recursion(char *s);


/**

 * is_palindrome - checks if a string is a palindrome

 * @s: string to reverse

 *

 * Return: 1 if it is, 0 it's not

 */

int is_palindrome(char *s)

{

        if (*s == 0)

                return (1);

        return (check_pal(s, 0, _strlen_recursion(s)));

}


/**

 * _strlen_recursion - returns the length of a string

 * @s: string to calculate the length of

 *

 * Return: length of the string

 */

int _strlen_recursion(char *s)

{

        if (*s == '\0')

                return (0);

        return (1 + _strlen_recursion(s + 1));

}


/**

 * check_pal - checks the characters recursively for palindrome

 * @s: string to check

 * @i: iterator

 * @len: length of the string

 *

 * Return: 1 if palindrome, 0 if not

 */

int check_pal(char *s, int i, int len)

{

        if (*(s + i) != *(s + len - 1))

                return (0);

        if (i >= len)

                return (1);

        return (check_pal(s, i + 1, len - 1));

}


