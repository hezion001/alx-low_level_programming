#include "main.h"
/**
 * _isalpha - program to be excuted
 * @c: character to be checked
 * Return: 1 if c is a letter, else Return 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
