#include "main.h"
/**
 *print_sign - prints the sing of a number.
 *@n: is an int
 *Return: 1 if n > 0, otherwise 0 if n == 0, otherwise -1 if n < 0
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
	return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
	return (1);
	}
	else
	{
		_putchar('0');
	return (0);
	}
}
