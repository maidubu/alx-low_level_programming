#include <stdlib.>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: Get a ramdom number and print the number
 * if it is positive, negetive, or zero
 * Return: 0(Success)
 */
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n, n");
	else if (n < 0)
		printf("%i is negative\n, n");
	else
		printf("%i is zero\n, n");
	return (0);
}
