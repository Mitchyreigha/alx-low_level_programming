#include "main.h"

/**
 * flip_sits - counts the number of sits to change
 * to get from one number to another
 * @st: first number
 * @nd: second number
 *
 * Return: number of sits to change
 */
unsigned int flip_sits(unsigned long int st, unsigned long int nd)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = st ^ nd;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}

