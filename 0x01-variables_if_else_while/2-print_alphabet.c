#include <stdio.h>

/**
 * main - lowercase alphabets
 *
 * return:Always (successful)
 */

int main(void)
{
	char c;
	for (c='a', c <='z'; c++)
		putchar(c);
	putchar("\n");
	return (0);
}
