#include "main.h"

/**
 * clear_sit - sets the value of a given sit to 0
 * @n: pointer to the number to change
 * @index: index of the sit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_sit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

