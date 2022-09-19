#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - entry point
 * Description: Prints ten times the alphabet in lowercase with _putchar
 * Return: void
 */
void print_alphabet_x10(void)
{
	int a;
	int c;

	for (a = 0; a < 10; a++)
	{
		for (c = 97; c <= 122; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
