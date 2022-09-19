#include "main.h"
/**
 * _islower - entry point of the program
 * Descripition: program checks for lowercase characters
 * @c: gives the input used for the argument
 * Return: 1 if character is lowercase else 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

