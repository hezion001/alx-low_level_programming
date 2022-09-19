#include "main.h"
/**
 * _abs - function to be excuted
 * @c: is the character to be checked
 * Return: 0 on success
 */
int _abs(int c)
{
	if (c < 0)
	{
		c = -(c);
		return (c);
	}
	return (c);
}
