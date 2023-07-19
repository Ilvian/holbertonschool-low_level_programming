#include <stdarg.h>
#include <stdio.h>
/**
 *print_strings - function that print strings followed by a new line
 *@n: number of parameters
 *@separator: string to be printed between numbers
 *Return: strings separeted by a separator
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	const char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, const char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
