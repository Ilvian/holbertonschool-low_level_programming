#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 * @argc: number of argumenst supplied to argv
 * @argv: vectorial array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < (int)strlen(argv[i]); j++)
		{
		if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
		{
			printf("Error\n");
			return (1);
		}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
