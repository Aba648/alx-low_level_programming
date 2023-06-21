#include "main.h"
/**
 *print_last_digit - prints the last digit of a number
 *@n: the number that function check
 *Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int b;

	if (n < 0)
	{
		n = -n;
		b = n % 10;
		_putchar(b + '0');
		return (b);
	}
	else
	{
		b = n % 10;
		_putchar(b + '0');
		return (b);
	}
}
