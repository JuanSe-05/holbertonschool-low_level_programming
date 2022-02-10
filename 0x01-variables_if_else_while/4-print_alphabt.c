#include <stdio.h>

/**
 * main - Prints alphabet in lowercase, No(e,q)
 *
 * Return: Always 0 (Success)
*/

int main(void)

{
	char alpha[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{

		putchar(alpha[i]);
	}

	putchar('\n');



	return (0);
}

