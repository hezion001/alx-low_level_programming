#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - starting point of the program
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int change, change_count = 0;

	if (argc != 2)
		return (printf("Error\n") && 1);
	change = atoi(*++argv);
	change_count = change <= 0 ? 0 :
		((change / 25) + ((change % 25) / 10) + ((change % 25 % 10) / 5) +
		 ((change % 25 % 10 % 5) / 2) + (change % 25 % 10 % 5 % 2));
	printf("%d\n", change_count);

	return (0);
}
