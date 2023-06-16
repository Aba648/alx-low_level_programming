#include <stdio.h>
/**
 *main - the main function
 *Return: 0 (success)
 */
int main(void)
{
	int alphabet = 'a';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'q' && alphabet != 'e')
		{
		putchar(alphabet);
		}
	}
	putchar('\n');
	return (0);
}
