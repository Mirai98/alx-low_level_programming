#include <stdio.h>

void printsent(void) __attribute__ ((constructor));

/**
 * printsent - a function that prints You're beat! and yet,
 * you must allow,\nI bore my house upon my back!\n
 * before the main function is executed.
 * function is executed
 *
 *return : void
 */
void printsent(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
