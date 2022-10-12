#include "function_pointers.h"
/**
 * array_iterator - executes `action` on all elements in `array`
 * @array: array to iterate
 * @size: size of `array`
 * @action: function to apply on `array`'s elements
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL)
		while (i < size)
			action(array[i++]);
}
