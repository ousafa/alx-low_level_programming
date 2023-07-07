#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: string of binary number
 * Return: converted number or 0 if
 * b is one or more chars
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i;

	if (!b)
		return (0);


	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decimal = (decimal << 1) | (b[i] - '0');
	}

	return (decimal);
}
