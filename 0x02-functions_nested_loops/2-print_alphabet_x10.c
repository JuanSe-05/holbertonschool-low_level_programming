#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
char i;
int t;
	for (t = 0; t <= 10; t++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
	}

	_putchar('\n');
}
