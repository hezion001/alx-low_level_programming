#include "main.h"
/**
 * _strcat - concats src to dest
 * @dest: array to start with
 * @src: array to copy from
 * Return: address of dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
