#include "main.h"

/**
 * print_binary - converts decimal to binary
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int current;
	int flag = 0;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
			_putchar('0');
	}

	if (!flag)
		_putchar('0');
}

