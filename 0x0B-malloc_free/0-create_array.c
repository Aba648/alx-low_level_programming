#include "main.h"
#include <stdlib.h>
/**
 *create_array - creates an array of size size and assing c
 *@size: size of array
 *@c: char to assing
 *Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc((size + 1) * sizeof(char));

	if (size == 0 || s == NULL)
		return (NULL);
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
