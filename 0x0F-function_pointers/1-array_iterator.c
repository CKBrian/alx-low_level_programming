#include "function_pointers.h"
/**
 * array_iterator - Executes a function given as parameter on array elememts
 * @array: pointer to array to be iterated
 * @size: Size of array
 * @action: Pointer to function to be called
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t i;

	if (action == NULL || size <= 0 || array == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
