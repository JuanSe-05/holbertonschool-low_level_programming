#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints alphabet
 *
 * Return: 0
 */

void print_alphabet(void)
{

char i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
