#include <stdio.h>

/**
 * main - function to calculate largest prime of 612852475143
 *
 * Return: Success Always
 */


int main(void)
{
	long int y = 612852475143;
	long int py;

	for (py = 2; py < y; py++)
	{
		if (y % py == 0)
		{
			y = y / py;
		}
	}
	printf("%ld\n", py);
	return (0);
}
