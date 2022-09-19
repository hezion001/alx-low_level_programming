#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - the functions that prints last digit
 * @n: is the charater to reviewed
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int lastDigit, p;

	lastDigit = n % 10;
	if (lastDigit < 0)
	{
		lastDigit = -(lastDigit);
	}
	p = '0' + lastDigit;
	_putchar(p);
	return (lastDigit);
}
