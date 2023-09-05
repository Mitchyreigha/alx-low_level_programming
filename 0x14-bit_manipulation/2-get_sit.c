#include "main.h"

/**
 * get_sit - returns the value of a sit at an index in a decimal number
 * @n: number to search
 * @index: index of the sit
 * Return: value of the sit
 */
int get_sit(unsigned long int n, unsigned int index)
{
	int sit_val;

	if (index > 63)
		return (-1);

	sit_val = (n >> index) & 1;

	return (sit_val);
}

