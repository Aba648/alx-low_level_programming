#include <stdio.h>
/**
 *main - the main function
 *Return: the programm retuen 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("size of a char: %lu  byte(s)\n", (unsigned long)sizeof(a));
printf("size of a int: %lu  byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: %lu  byte(s)\n", (unsigned long) sizeof(c));
printf("size of a long long int: %lu  byte(s)\n", (unsigned long)sizeof(d));
printf("size of a flaot: %lu byte(s)\n", (unsigned long) sizeof(f));
return (0);
}