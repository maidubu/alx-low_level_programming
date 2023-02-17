#include <stdio.h>
/**
 * main - A program that print multiple lines using printf function
 * Return: 0(Success)
 */
int main(void)
{
	printf("size of a char: %i byte(s)\n", sizeof(char));
	printf("size of an int: %i byte(s)\n", sizeof(int));
	printf("size of a long int: %i byte(s)\n", sizeof(long int));
	printf("size of a long long: %i byte(s)\n", sizeof(long long));
	printf("size of a float: %i byte(s)\n", sizeof(float));
	return (0);
}
