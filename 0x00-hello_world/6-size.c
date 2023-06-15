#include <stdio.h>
/**
 *main - the main function
 *Return: the programm retuen 0
 */
int main(void)
{
	printf("size of a char: %lu  byte(s)\n", sizeof(char));
	printf("size of a int: %lu  byte(s)\n", sizeof(int));
	printf("size of a long int: %lu  byte(s)\n", sizeof(long int));
	printf("size of a long long int: %lu  byte(s)\n", sizeof(long long int));
	printf("size of a floa: %lu  byte(s)\n", sizeof(float));
	return (0);
}
