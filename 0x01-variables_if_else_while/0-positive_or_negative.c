#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
 * main - prints a random number and states whether it is positive, negative or zero.
 *
 * return: Always 0
 */

int main(void)
{
	int x;

	srand(time(0));
	x = rand() - RAND_MAX / 2;

	if (x > 0)
		printf("%d is positive\n", x);
	else if (x < 0)
		printf("%d is negative\n", x);
	else 
		printf("%d is zero\n", x);
	
	return (0);
}
