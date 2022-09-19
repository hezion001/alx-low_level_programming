#include "main.h"
#include <stdio.h>
/**
 * print_sign - is the program that prints signs
 * @n: is the character to checked
 * Return: 1 if n is greater than 0, 1 if n is 0 and -1 if n is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}

