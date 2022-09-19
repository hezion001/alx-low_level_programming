#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - is a program that displays all the lowercase alphabet
 * Return: Always 0 on success
 */
void print_alphabet(void)
{
	int c;

	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
