#include "main.h"

/**
 * get_bit - returns the bits in decimal
 * @n: how many searches
 * @index: index of the bit
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}

