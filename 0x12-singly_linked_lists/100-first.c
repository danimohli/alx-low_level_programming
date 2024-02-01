#include <stdio.h>
void myC(void) __attribute__((constructor));
/**
 * myC - call first
 * Return: void
 */
void myC(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
