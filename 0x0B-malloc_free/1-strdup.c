#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate to new memory space location
 *@str: input
 *Return: 0
 */
char *_strdup(char *str)
{
	char *p;
	int i;
	int j;

	i = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	p = malloc(sizeof(char) * (i + 1))
	if (p == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		p[j] = str[j];


	return (p);
}
