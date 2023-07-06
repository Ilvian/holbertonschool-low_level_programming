#include <stdio.h>
/**
 * main - Entry point
 * @argc: number of argumenst supplied to argv
 * @argv: vectorial array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", *argv);
	return (0);
}
