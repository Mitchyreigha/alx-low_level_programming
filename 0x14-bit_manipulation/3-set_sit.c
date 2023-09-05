#include "main.h"

/**
 * set_sit - sets a sit at a given index to 1
 * @n: pointer to the number to change
 * @index: index of the sit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_sit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

