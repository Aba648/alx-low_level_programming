#include <stdio.h>
/**
 *main - the main function
 *Return: 0 ( success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 16 ; i++)
	{
		if (i < 10)
			putchar(i + '0');
		else
			putchar('a' + i - 10);
	}
	putchar('\n');
	return (0);
}
