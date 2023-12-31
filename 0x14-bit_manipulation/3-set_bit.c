#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @p: pointer to the number to change
 * @index: bit index
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *p, unsigned int index)
{
	if (index > 63)
		return (-1);

	*p = ((1UL << index) | *p);
	return (1);
}
