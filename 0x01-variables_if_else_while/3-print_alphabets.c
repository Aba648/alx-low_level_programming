#include <stdio.h>
/**
 *main - the main function
 *Return: 0 (success)
 */
int main(void)
{
	char  alphlowercase = 'a';
	char alphuppercase = 'A';

	while (alphlowercase <= 'z')
	{
		putchar(alphlowercase);
		alphlowercase++;
	}
	while (alphuppercase <= 'Z')
	{
		putchar(alphuppercase);
		alphuppercase++;
	}
	putchar('\n');
	return (0);
}





