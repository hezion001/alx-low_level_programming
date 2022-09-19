#include "main.h"
/**
 * puts2 - prints every other character of a string to stdout
 * @str: string to print
 * Return: void
 */
void puts2(char *str)
{
	char even = 1;

	for ( ; *str != '\0'; str++)
	{
		if (even)
			_putchar(*str);
		even = !even;
	}
	_putchar('\n');
}
