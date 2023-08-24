#include <stdio.h>
void printfirst(void)__attribute__((constructor));
/**
 * printfirst - prints a sentence before the main function is executed
 */
void printfirst(void)
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}
