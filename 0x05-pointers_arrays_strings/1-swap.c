#include "main.h"
/**
 *swap_int - swaps the values of two integers
 *@a: integer to swap
 *@b: integer to swap
 *Return: nothing
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
