#include "main.h"
/**
 * _isupper - The program to check for uppercase letters
 * @c: the character to be checked
 * Return: 0 if c is uppercase or 1 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
