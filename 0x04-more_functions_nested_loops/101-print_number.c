#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int m;

	if (m < 0)
	{
		m = -n;
		_putchar('-');
	}
	else if (m / 10)
	{
		print_number(m / 10);
	}
	else
	{
		m = n;
	}
	_putchar((m % 10) + '0');
}



