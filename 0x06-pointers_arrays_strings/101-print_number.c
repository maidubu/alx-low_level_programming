#include "main.h"

/**
 * print_number - function that prints an integer char.
 * @n: integer to be printed.
 * Return: 0
 */

void print_number(int n)
{
	if (n / 10)
	{
		print_number(n / 10);
		n %= 10;
		if (n < 0)
			n *= -1;
	}
	else
		if (n < 0)
		{
			_putchar('-');
			n *= -1;
		}
	_putchar(n + '0');
}
