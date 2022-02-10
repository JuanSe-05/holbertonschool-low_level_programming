#include <stdio.h>
/**
 * main - Prints alphabet lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x;
	char y;

	for (x = 'a' ; x <= 'z' ; x++)
	{
		putchar(x);
	}
	for (y = 'A' ; y <= 'Z' ; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
