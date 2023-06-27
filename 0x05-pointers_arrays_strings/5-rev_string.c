#include "main.h"
/**
 *rev_string - reverses a string
 *@s: string
 *Return: nothing
 */
void rev_string(char *s)
{
	char r = s[0];
	int i;
	int counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}
	for (i = 0; i < counter; i++)
	{
		counter--;
		r = s[i];
		s[i] = s[counter];
		s[counter] = r;
	}
}



