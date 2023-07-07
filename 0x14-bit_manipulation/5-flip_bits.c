#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int c = 0;
	unsigned long int e = n ^ m;
	int i;

	for (i = 0; i < 64; i++)
	{
		if (e & (1UL << i))
			c++;
	}

	return (c);
}

