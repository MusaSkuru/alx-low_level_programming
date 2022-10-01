#include <stdio.h>

/**
 * main - Write a program that prints the number of arguments passed pinto it
 *
 * @args: Argument count
 * @argv: Argument vector
 *
 * Return: 0
 */
int main(int args, char *argv [])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}
